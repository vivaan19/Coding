// to illustrate the use of functions with deafault args.
#include <bits/stdc++.h>
using namespace std;
class myclass
{
    string name;
    int age;
    public:
    void display(string, int);
};

void myclass :: display(string name="NotDecided", int age=0) // default args.
{
    cout << "Student Name: " << name << ", Age :" << age << "\n";
}

int main()
{
    myclass obj;
    obj.display("Vivaan", 19);
    obj.display("Ram", 22);
    obj.display("Rahul", 21);
    obj.display();
    return 0;
}
