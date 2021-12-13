// example of constructors in derived class -- method 2
// through initialization list.
#include <bits/stdc++.h>
using namespace std;
class A
{
    int a, b;
    public:
    A(int i, int j): a(i), b(j);
    {
        cout << "A is constructed\n";
    }
    void show_ab(void)
    {
        cout << "The value of a is " << a << "\n";
        cout << "The value of b is " << b << "\n";
    }
};
int main()
{

    return 0;
}
