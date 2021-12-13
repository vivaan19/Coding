#include <bits/stdc++.h>
using namespace std;

class student
{
    protected:
    int roll;
    string maj;

    public:
    void getroll(int a) { roll = a; }

    void putroll(void) { cout << "Roll Number = " << roll << "\n"; }

    void getmajor(string m1)
    {
        maj = m1;
    }

    void putmajor(void)
    {
        cout << "Major : " << maj << "\n";
    }
};

class arts : public student
{
    float sub1, sub2;
    public:
    void getmarks(float f1, float f2)
    {
        sub1 = f1; sub2 = f2;
    }

    void putmarks(void)
    {
        cout << "Marks in sub1 = " << sub1 << "\n";
        cout << "Marks in sub2 = " << sub2 << "\n";
    }

    void adis(void)
    {
        putroll();
        putmajor();
        putmarks();
    }
};

class engg : public student
{
    protected:
    string branch;
    float gpa;

    public:

    void getbranch(string b1)
    {
        branch = b1;
        
    }
    void putbranch(void)
    {
        cout << "This student have opted for " << branch << " branch \n";
    }
    void getgpa(float g)
    {
        gpa = g;
    }
    void putgpa(void)
    {
        cout << "Till Now student have " << gpa << " gpa \n";
    }
};

class mech : public engg
{
    public:
    void dism(void)
    {
        putroll();
        putbranch();
        putgpa();
        putmajor();
    }
    
};

class cse : public engg
{
    public:
    void disc(void)
    {
        putroll();
        putbranch();
        putgpa();
        putmajor();
    }
   
};
int main()
{
    int sel;
    cout << "Enter 1 for arts , 2 for Engineering : ";
    cin >> sel;
    if(sel == 1)
    {
        arts a1;
        a1.getroll(12);
        a1.getmarks(12.5, 12.9);
        a1.getmajor("Pol. Science");
        a1.adis();
    }
    else
    {
        int esel;
        cout << "Press 1 for Mech and 2 for CSE: ";
        cin >> esel;
        if(esel == 1)
        {
            mech m1;
            m1.getroll(1001);
            m1.getmajor("Complex Machines");
            m1.getgpa(4.5);
            m1.getbranch("Mechanical Engg.");
            m1.dism();
        }
        else
        {
            cse c1;
            c1.getroll(34);
            c1.getmajor("Machine Learning");
            c1.getgpa(4.34);
            c1.getbranch("Computer Sciecnce Engg.");
            c1.disc();
        }
    }
    return 0;
}
