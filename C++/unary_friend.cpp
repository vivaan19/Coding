// unary - operator using friend functions.

#include <bits/stdc++.h>
using namespace std;
class space
{
    int x,y,z;
    public:
    void getdata(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display(void)
    {
        cout << x << " "; 
        cout << y << " "; 
        cout << z << "\n"; 
    }
    friend space operator-(space s);
};

space operator-(space s)
{
    space temp;
    temp.x=-s.x;
    temp.y=-s.y;
    temp.z=-s.z;

    return(temp);
}
int main()
{
    space S, S2;

    S.getdata(10, -20, 30);

    cout << "Before Overloding\n";
    cout << "S :";

    S.display();

    S2=-S;
    cout << "After Overloding\n";
    cout << "S :";
    S2.display(); 
    return 0;
}
