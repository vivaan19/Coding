#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cout << "enter the size of array: ";
    cin >> n;
    int a[n], *ptr;
    ptr=a;

    for(i=0; i<n; i++)
    {
    cout << "\na" << "[" << i << "]" << " = ";
    cin >> a[i];
    }

    cout << "The values of array are:\n";
    for(i=0; i<n; i++)
    {
        cout << *(ptr+i) << "\n";
    }
    
    cout << "The indexes of array are:\n";
    for(i=0; i<n; i++)
    {
        cout << i << "\n"; 
    }

    return 0;
}
