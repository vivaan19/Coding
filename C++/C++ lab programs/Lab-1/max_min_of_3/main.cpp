#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=2;
    int b=3;
    int c=4;

    // for greatest
    if(a>b)
    {
        if(a>c)
        cout << "a is the greatest\n";
        else
        cout << "c is the greatest\n";
    }

    else
    {
        if(b>c)
        cout << "b is the greatest\n";
        else
        cout << "c is the greatest\n";
    }

    // for smallest

    if(a<b)
    {
        if(a<c)
        cout << "a is the smallest\n";
        else
        cout << "c is the smallest\n";
    }
    else
    {
        if(b<c)
        cout << "b is the smallest\n";
        else
        cout << "c is the smallest\n";
    }
    return 0;
}
    

