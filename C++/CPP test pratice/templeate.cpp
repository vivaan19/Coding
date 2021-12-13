#include <bits/stdc++.h>
using namespace std;
template <class t1 = int, class t2=int>
class test
{
    t1 a;
    t2 b;
    public:
    test(t1 x, t2 y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout << a << " " << b << "\n";
    }
};
int main()
{
    test<float, int>obj1(1.1, 2);
    test<>obj2(1.1,'w');
    obj1.show();
    obj2.show();
    return 0;
}
