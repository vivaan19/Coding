#include <bits/stdc++.h>
using namespace std;
int b[5];
char g[5];
float a[5];
class student
{
    int marks[5][5];
    int roll_no[5];
    string name[5];

    public:
    void getdata(void);
    void avg(void);
    void grade(void);
    void display(void);
};

void student :: getdata(void)
{
    int i, j;
    cout << "Enter student name:\n";
    for(i=0; i<5; i++)
    {
        cout << "\nStudent " << i+1 << ":";
        cin >> name[i];
    }
    cout << "Enter student roll no:\n";
    for(i=0; i<5; i++)
    {
        cout << "\nStudent " << i+1 << ":";
        cin >> roll_no[i];
    }
    cout << "Enter student marks:\n";
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
        cout << "\nStudent " << i+1 << "Subject " << j+1 << ":";
        cin >> marks[i][j];
        }
    }
}

void student :: avg(void)
{
    int sum, i, j;
    for(i=0; i<5; i++)
    {
        sum=0;
        for(j=0; j<5; j++)
        {
            sum=sum+marks[i][j];
        }
        a[i]=float(sum)/5;
        b[i]=sum/5;
    }
}

void student :: grade(void)
{
    int i;
    for(i=0; i<5; i++)
    {
        if(b[i] == 20 || b[i] == 19)
        g[i] = 'S';
        else if(b[i] == 18 || b[i] == 17)
        g[i] = 'A';
        else if(b[i] == 16 || b[i] == 15)
        g[i] = 'B';
        else if(b[i] == 14 || b[i] == 13)
        g[i] = 'C';
        else if(b[i] == 12 || b[i] == 11)
        g[i] = 'D';
        else if(b[i] == 10 || b[i] == 9)
        g[i] = 'E';
        else
        g[i] = 'F';
        
    }
}

void student :: display(void)
{
    int i;
    cout << "\nEntire Student detail:\n";
    for(i=0; i<5; i++)
    {
        cout << "Student Name: " << name[i] << ", Roll Number: " << roll_no[i] << ", Average marks out of 20: " << a[i] << ", Overall grade: " << g[i] << "\n";
    }
}


int main()
{   
    student obj;
    obj.getdata();
    obj.avg();
    obj.grade();
    obj.display();
    return 0;
}
