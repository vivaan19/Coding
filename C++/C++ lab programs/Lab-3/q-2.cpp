// pass by reference 
#include <bits/stdc++.h>
using namespace std;
class myclass
{
    int a,b;
    public:
    void swap(int &, int &);
};


void myclass :: swap(int &a, int &b)
{
    int z;
    z=a;
    a=b;
    b=z;
}
int main()
{
    int x, y;
    cout << "Enter num1 and num2 resp.: \n";
    cin >> x >> y;
    cout << "Before Swap:: num1 = " << x << ", num2= " << y << "\n"; 
    myclass obj;
    obj.swap(x, y);
    
    
    cout << "After Swap:: num1 = " << x << ", num2 = " << y << "\n";
    return 0;
}
