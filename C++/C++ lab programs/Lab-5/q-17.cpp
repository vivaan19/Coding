#include <bits/stdc++.h>
using namespace std;
class myclass
{
    int a, b;
    public:
    void getdata(void);
    int add(void);
    void displaydata(void);
};

void myclass :: getdata(void)
{
    cout << "Enter two resp. : ";
    cin >> a >> b;
}

int myclass :: add(void)
{
    int c;
    c=a+b;
    return c;
}

void myclass :: displaydata(void)
{
    cout << "The sum of " << a << " and " << b << " is " << add();
}

int main()
{   
    myclass obj;
    obj.getdata();
    obj.add();
    obj.displaydata();
    return 0;
}
