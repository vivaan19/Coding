#include <iostream>
using namespace std;
// to implement vector from an array and scalar product
const int size = 3;
template <class T>
class vector1
{
    T *v;
    public:

    vector1()  // creates null vector
    {
        v = new int[size];
        for(int i=0; i<size; i++)
        v[i] = 0;
    }

    void create_array(T *a)  // creates a vector from array
    {
        for(int i=0; i<size; i++)
        v[i] = a[i];
    }

    T operator*(vector1 &y)   // sclar product
    {
        T sum=0;
        for(int i=0; i<size; i++)
        {
            sum += this->v[i] * y.v[i];
        }
        return (sum);
    }
    void display(void)
    {
        for(int i=0; i<size; i++)
        cout << v[i] << "\t";
        cout << "\n";
    }

};
int main()
{
    int x[3] = {1, 2, 3};
    int y[3] = {2, 3, 4};

    vector1 <int> v1; 
    vector1 <int> v2;

    v1.create_array(x);
    v2.create_array(y);

    cout << "v1 = ";
    v1.display();
    
    cout << "v2 = ";
    v2.display();

    int r = v1.operator*(v2);
    cout << "Result = " << r; 
    return 0;
}