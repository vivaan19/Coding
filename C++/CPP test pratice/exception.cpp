#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
	cin >> a >> b;
	try
	{
		if(b == 0)
		throw(b);
		else
		{
			int div = a/b;
			cout << div << "\n";
		}
	}
	catch(int myerr)
	{
		cout << "The denominator cannot be 0 for division\n";
	}
    return 0;
}
