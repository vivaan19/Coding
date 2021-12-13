#include <bits/stdc++.h>
using namespace std;
template<class T = int>
void fun(T arg1, int arg2)
{
    cout << "Fun 1 = " << arg1 << " " << arg2 << "\n";
}

template<class T1, class T2>
void fun(T1 arg1, T2 arg2)
{
    cout << "Fun 2 = " << arg1 << " " << arg2 << "\n";
}

void fun(int arg1 = 30, int arg2 = 35)
{
    cout << "Fun 3 = "  << arg1 << " " << arg2 << "\n";
}

int main()
{
    fun(25, 28);  // fun 3    
    fun(25, 28.0); // fun 2    
    fun(25.0, 28); // fun 1 
    fun();  // fun 3
    fun(45); // fun 3

    return 0;
}
