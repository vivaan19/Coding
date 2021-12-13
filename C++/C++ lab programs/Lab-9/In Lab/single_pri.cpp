#include <bits/stdc++.h>
using namespace std;
class base
{
    public:
    int a;
    int b;
    int c;
    int mul(void);
};

class derived : private base
{
    public:
    void getdata(int , int);
    void display(void);
};

void derived :: getdata(int x, int y)
{
    a=x;
    b=y;
}

void derived :: display(void)
{
    cout << "Value of a and b resp. : " << a << ", " << b << "\n";
    cout << "Multiply Result : " << mul();
}

int base :: mul(void)
{
    c = a * b;
    return (c);
}


int main()
{
    int f1, f2;
    cout << "Enter Value for a and b :";
    cin >> f1 >> f2;
    derived d;
    d.getdata(f1, f2);
    d.display();
    return 0;
}
