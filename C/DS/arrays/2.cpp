#include <bits/stdc++.h>
using namespace std;
// decimal to binary
int main()
{
    int i=0, a[100000], num, rem, size;
    cin >> num;
    while (num != 0)
    {
        rem = num % 2;
        a[i] = rem;
        i++;
        num = num / 2;
    }

    size = i;
    cout << "Bits = " << size << "\n";

    for(int j=size-1; j>=0; j--)
    {
        cout << a[j];
    }
    
    return 0;
}
