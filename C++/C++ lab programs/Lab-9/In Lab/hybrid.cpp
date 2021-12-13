#include <bits/stdc++.h>
using namespace std;
class student 
{
    protected:
    int roll;
    public:
    void getdata(int a)
    {
        roll = a;
    }
    void put_no(void)
    {
        cout << "ROll Number = " << roll << "\n";
    }
};

class test : public student
{
    protected:
    float sub1, sub2;

    public:
    void get_marks(float b, float c)
    {
        sub1 = b; sub2 = c;
    }
    void put_marks(void)
    {
        cout << "Marks in Sub1 = " << sub1 << "\n";
        cout << "Marks in Sub2 = " << sub2 << "\n";
    }
};

class sports
{
    protected:
    float score;

    public:
    void get_score(float s)
    {
        score = s;
    }

    void put_score(void)
    {
        cout << "Score in Sports = " << score << "\n";
    }
};

class result : public test, public sports
{
    float total;
    public:
    void display(void)
    {
        total = sub1 + sub2 + score;
        cout << "Total = " << total << "\n";
        put_no();
        put_score();
        put_marks();
    }
};
int main()
{
    result r1;

    r1.getdata(12);
    r1.get_marks(112.0, 113.0);
    r1.get_score(13.0);
    r1.display();
    return 0;
}
