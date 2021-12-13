#include <iostream>
#include <string>
using namespace std;
class person
{
    protected:
    string name;
    int code;
    public:
    virtual void display()=0;   // pure virtual function
    void getname()
    {
        cout << "Enter your name:";
        cin >> name;
    }
    void getcode()
    {
        cout << "Enter the code\n";
        cin >> code;
    }
};

class account : virtual public person
{
    protected:
    int pay;
    public:
    void getpay()
    {
        cout << "Enter pay:";
        cin >> pay;
    }
    void display()
    {
        cout << pay << "\n";
        cout << name << "\n";
        cout << code << "\n";
    }
};

class admin : virtual public person
{
    protected:
    int exprience;
    public:
    void getexp()
    {
        cout << "Enter exprience in years:";
        cin >> exprience;
    }
    void display()
    {
        cout << exprience << "\n";
        cout << name << "\n";
        cout << code << "\n";
    }
};  

class master : public account, public admin
{

    public:
   
    void display()
    {
        cout << "******** ALL PERSON INFORMMATION ********\n\n";
        cout << "Name :: " << name << "\n";
        cout << "Code :: " << code << "\n";
        cout << "Exprience :: " << exprience << " years\n";
        cout << "Pay :: " << pay << "\n";

        if(pay <= 5000)
        cout << "This is a trainee\n";
        else
        cout << "This is a master trainee\n";
    }
    
};  

int main()

{
    int ch;
    master m1;

    while(3)
    {
        cout << "Enter 1 to enter information\n";
        cout << "Enter 2 to modify information\n";
        cout << "Enter 3 to dispay information\n";
        cout << "Enter 4 to Exit\n";
        cin >> ch;
        if(ch == 1)
        {
            m1.getname();
            m1.getcode();
            m1.getpay();
            m1.getexp();
        }
        else if(ch == 2)
        {
            int ch1;
            cout << "Which information to modify ?\n";
            cout << "Enter 1 to modify name\n";
            cout << "Enter 2 to modify code\n";
            cout << "Enter 3 to modify exprience\n";
            cout << "Enter 4 to modify pay\n";
            cout << "Enter 5 to do not modify any more\n";
            if(ch1 == 1)
            m1.getname();
            else if(ch1 == 2)
            m1.getcode();
            else if(ch1 == 3)
            m1.getexp();
            else if(ch1 == 4)
            m1.getpay();
            else 
            break;
        }
        else if(ch == 3)
        {
            m1.display();
        }
        else
        break;
    }
    return 0;
}
