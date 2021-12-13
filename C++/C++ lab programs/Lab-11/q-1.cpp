#include <iostream>
#include <cstring>
using namespace std;

class person
{
    string name;
    float age;

    public:
    person(string st, float a)
    {
        name = st;
        age = a;
    }

    person & greater(person &x)
    {
        if(x.age >= age)
            return x;
        else
        return *this;
    }

    void display(void)
    {
        cout << "Name : " << name << "\n";
        cout << "Age : " << age << "\n";
    }
};  
int main()
{
    person p1("Vivaan", 19);
    person p2("Krishna", 20);
    person p3("Ram", 18);

    person p = p1.greater(p2);

    cout << "Elder Person : \n";
    p.display();

    p = p3.greater(p1);
    cout << "Elder Person : \n";
    p.display();
    

    return 0;
}
