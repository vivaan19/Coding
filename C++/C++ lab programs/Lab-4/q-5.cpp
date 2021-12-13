#include <bits/stdc++.h>
using namespace std;

// using class and structure
class myclass
{
    struct student
    {
        int roll_number[5];
        string name[6];
        float marks[5];
    };
    student a;

    public:
    void getdata(void);
    void showdata(void);
};

void myclass :: getdata(void)
{
    int i;

    cout << "Enter student roll number\n";
    for(i=0; i<5; i++)
    {
        cout << "\nStudent: " << i+1 << "-";
        cin >> a.roll_number[i];
    }

    cout << "Enter student name\n";
    for(i=0; i<6; i++)
    {
        //cout << "\nStudent: " << i+1 << "-";
        getline(cin, a.name[i]);
    }

    cout << "Enter student marks\n";
    for(i=0; i<5; i++)
    {
        cout << "\nStudent: " << i+1 << "-";
        cin >> a.marks[i];
    }
}

void myclass :: showdata(void)
{
    int i, j, temp;
    string temp1;
    
    // for roll number
    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i-1; j++)
        {
            if(a.roll_number[j] > a.roll_number[j+1])
            {
                temp=a.roll_number[j];
                a.roll_number[j]=a.roll_number[j+1];
                a.roll_number[j+1]=temp;
            }
        }
    }
    cout << "Sorted order of roll numbers:\n";
    for(i=0; i<5; i++)
    {
        cout << a.roll_number[i] << "\n";
    }

    // for marks
    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i-1; j++)
        {
            if(a.marks[j] > a.marks[j+1])
            {
                temp=a.marks[j];
                a.marks[j]=a.marks[j+1];
                a.marks[j+1]=temp;
            }
        }
    }
    cout << "Sorted order of marks:\n";
    for(i=0; i<5; i++)
    {
        cout << a.marks[i] << "\n";
    }

    // for names

    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i; j++)
        {
            if(a.name[j] > a.name[j+1])
            {
                temp1=a.name[j];
                a.name[j]=a.name[j+1];
                a.name[j+1]=temp1;
            }
        }
    }
    cout << "Sorted order of names:\n";

    for(i=0; i<6; i++)
    {
        cout << a.name[i] << "\n";
    }
}

int main(int argc, char const *argv[])
{
    myclass obj;
    obj.getdata();
    obj.showdata();
    return 0;
}

//using only structure
/*
struct student
    {
        int roll_number[5];
        string name[6];
        float marks[5];
    };
    student a;

void getdata(void)
{
    int i;

    cout << "Enter student roll number\n";
    for(i=0; i<5; i++)
    {
        cout << "\nStudent: " << i+1 << "-";
        cin >> a.roll_number[i];
    }

    cout << "Enter student name\n";
    for(i=0; i<6; i++)
    {
        //cout << "\nStudent: " << i+1 << "-";
        getline(cin, a.name[i]);
    }

    cout << "Enter student marks\n";
    for(i=0; i<5; i++)
    {
        cout << "\nStudent: " << i+1 << "-";
        cin >> a.marks[i];
    }
}
void displaydata(void)
{
    // display in sorted order
    int i, j, temp;
    string temp1;
    
    // for roll number
    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i-1; j++)
        {
            if(a.roll_number[j] > a.roll_number[j+1])
            {
                temp=a.roll_number[j];
                a.roll_number[j]=a.roll_number[j+1];
                a.roll_number[j+1]=temp;
            }
        }
    }
    cout << "Sorted order of roll numbers:\n";
    for(i=0; i<5; i++)
    {
        cout << a.roll_number[i] << "\n";
    }

    // for marks
    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i-1; j++)
        {
            if(a.marks[j] > a.marks[j+1])
            {
                temp=a.marks[j];
                a.marks[j]=a.marks[j+1];
                a.marks[j+1]=temp;
            }
        }
    }
    cout << "Sorted order of marks:\n";
    for(i=0; i<5; i++)
    {
        cout << a.marks[i] << "\n";
    }

    // for names

    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i; j++)
        {
            if(a.name[j] > a.name[j+1])
            {
                temp1=a.name[j];
                a.name[j]=a.name[j+1];
                a.name[j+1]=temp1;
            }
        }
    }
    cout << "Sorted order of names:\n";

    for(i=0; i<6; i++)
    {
        cout << a.name[i] << "\n";
    }

}

int main()
{
    int n, e;

    e=1;
    while(e)
    {
    cout << "Press 1 to input user details, 2 to display all details in sorted order, 3 to terminate\n";
    cout << "Enter your option: ";
    cin >> n;
        switch(n)
        {
            case 1:
            {
                getdata();
                break;
            }
            case 2:
            {
                displaydata();
                break;
            }
            case 3:
            {
                e=0;
                break;
            }
        }
    }

    return 0;
}
*/