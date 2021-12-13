#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, temp, j;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];

    cout << "Enter the elements in the array:\n";

    for(i=0; i<n; i++)
    {
        cout << "\na" << "[" << i << "]" << " = ";
        cin >> a[i];
    }

    // now to sort the array

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    cout << "The array in sorted order is:\n";

    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
