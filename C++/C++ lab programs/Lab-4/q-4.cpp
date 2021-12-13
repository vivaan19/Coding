#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int a, *ptra, b, *ptrb, temp;

    ptra=&a;
    ptrb=&b;
    cout << "Enter two values:\n";
    cin >> a >> b;  
    cout << "Values before swap: a=" << *ptra << " , b=" << *ptrb << "\n";

    temp=*ptrb;
    *ptrb=*ptra;
    *ptra=temp;

    cout << "Values after swap: a=" << *ptra << " , b=" << *ptrb;
    

    return 0;
}
