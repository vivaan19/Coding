// overloding of binary + operator using friend function

#include <bits/stdc++.h>
using namespace std;
class complex1
{
    float x, y;
    public:

    void getdata(float real, float img)
    {
        x=real;
        y=img;
    }

    void display(void)
    {
        cout << x << "+ j " << y << "\n";
    }

    friend complex1 operator+(complex1 c, complex1 c4) // two arguments are used
    {
        complex1 temp;

        temp.x = c.x + c4.x;
        temp.y = c.x + c4.y;
        return(temp);
    }
};

int main()
{
    complex1 c1, c2, c3;

    c1.getdata(2.2, 3.4);
    c2.getdata(3.3, 3.5);

    c3 = c1 + c2; // both used as parameters

    cout << "Before Overloding\n";
    cout << "C1: "; 
    c1.display();

    cout << "C2: "; 
    c2.display();

    cout << "After Overloding\n";
    cout << "C3: "; 
    c3.display();

    return 0;
}
