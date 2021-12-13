#include <bits/stdc++.h>
using namespace std;

class myclass
{
    int a, b;
    float x, y;
    public:
    int add(int , int);
    float add(float, float);
};
int myclass :: add(int a, int b)
{
    return a+b;
}
float myclass :: add(float x, float y)
{
    return x+y;
}


int main()
{
    int a,b;
    cout << "Enter two int numbers resp.: \n";
    cin >> a >> b; 
    float x,y;
    cout << "Enter two float numbers resp.: \n";
    cin >> x >> y;

    myclass obj;
    cout << "Sum of int = " << obj.add(a, b)<< "\n";
    cout << "Sum of float = " << obj.add(x,y) << "\n";

    return 0;
}
