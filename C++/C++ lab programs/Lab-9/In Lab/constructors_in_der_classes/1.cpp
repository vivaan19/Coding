// example of constructors in derived class -- method 1
#include <bits/stdc++.h>
using namespace std;
class alpha
{
    int a, b;
    public:
    alpha(int i, int j)     // alpha constructor
    {
        a=i;
        b=j;
        cout << "Alpha initialized\n";
    }
    void show_alpha(void)
    {
        cout << "a1 = " << a << "\n";
        cout << "a2 = " << b << "\n";
    }
};

class beta      
{
    float f1, f2;
    public:
    beta(float i, float j)      // beta constructor
    {
        f1 = i;
        f2 = j;
        cout << "Beta initialized\n";
    }
    void show_beta(void)
    {
        cout << "B1 = " << f1 << "\n";
        cout << "B2 = " << f2 << "\n";
    }
};

class gamma : public beta, public alpha
{
    int g1;
    public:
    gamma(int a1, int a2, float b1, float b2, int g2):   // gamma constructor
    alpha(a1, a2), beta(b1, b2)
    {
        g1 = g2;
        cout << "Gamma Initialized\n";
    }
    void show_gamma(void)
    {
        cout << "G1 = " << g1 << "\n";
    }
};

int main()
{
    
    int a1, a2, g1;
    float b1, b2;
    cout << "Enter the values of class alpha: ";
    cin >> a1 >> a2;
    cout << "Enter the values of class beta float: ";
    cin >> b1 >> b2;
    cout << "Enter the values of class gamma: ";
    cin >> g1;
    
   gamma g(a1, a2, b1, b2, g1);

   g.show_alpha();
   g.show_beta();
   g.show_gamma();
    
    
    return 0;
}
