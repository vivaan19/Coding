// overloding the binary + operator
// using member function. 

#include <bits/stdc++.h>
using namespace std;
class myclass
{
    float x, y;
    public:

    myclass() {}; // just to satisfy compiler

    myclass(float real, float img) // parametarized const.
    {
        x=real;
        y=img;
    }

    myclass operator+(myclass); // operator function, atleast one obj is passed

    void display(void); // display the result

};

// function defination

myclass myclass :: operator+(myclass obj)
{
    myclass temp;
    temp.x = x + obj.x; // obj of class c2
    temp.y = y + obj.y;
    return temp; 

}
void myclass :: display(void)
{
    cout << x << " + j " << y << "\n";
}

// main function 
int main()
{
    myclass c1(2.5, 3.5), c2(1.6, 2.7), c3;

    c3=c1+c2;

    cout << "Before Overloding\n";
    cout << "C1= "; 
    c1.display();

    cout << "C2= "; 
    c2.display();

    cout << "After Overloding\n";
    cout << "C3= "; 
    c3.display();

    return 0;
}
