#include <bits/stdc++.h>
using namespace std;
class A 
{
    int a;  // this is not inheritable

    public: // these are inheritable
    int b;
    int getdata(void);
    void display_initial(void);
};

class B : public A    // visibility mode : public means that public members of A are public in B
{
    int c;
    public:
    void display_final(void);
    int mul(void);

};
int A :: getdata(void)
{
    a=5; b=10;
    return (a);
}

void A :: display_initial(void)
{
    cout << "Initial Values of a and b is " << a << " " << b << "\n";
}

int B :: mul(void)
{
    int c;
    c = b * getdata();
    return (c);
}

void B :: display_final(void)
{
    cout << "Value of A : " << getdata() << "\n";
    cout << "Value of B : " << b << "\n";
    cout << "Value of C : " << mul() << "\n";
}

int main()
{
    B obj;
    obj.getdata();
    obj.display_initial();
    obj.display_final();
    return 0;
}
