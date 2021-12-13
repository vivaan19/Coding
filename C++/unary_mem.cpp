// overloding of unary minus operator using member function

#include <bits/stdc++.h>
using namespace std;

class myclass
{
    int a, b, c;

    public:

    void getdata(int x, int y, int z) // get data from main
    {
        a=x;
        b=y;
        c=z;
    }

    // operator overloding function

    myclass operator-()
    {
        myclass temp;
        temp.a = -a;
        temp.b = -b;
        temp.c = -c;

        return(temp);
    }

    // display function

    void display(void)
    {
        cout << "a = " << a << " b = " << b << " c = " << c << "\n";
    }

};
int main()
{
    myclass obj, obj1;

    obj.getdata(3, 4, 5);

    cout << "Before Overloding\n";
    
    obj.display();

    obj1 = -obj;
    cout << "After Overloding\n";
    obj1.display();

    return 0;
}
