#include <bits/stdc++.h>
using namespace std;

class myclass
{
    int **a, **b, m, n, m1, n1;

    public:
    void mem_alloc(void)
    {
        cout << "Enter rows and cols for 1st matrix: ";
        cin >> m >> n;

        // mem_alloc
        // row mem alloc through array of pointers
        a= new int* [m]; // array of pointer of size rows

    }
};


/*
void add(int m, int n, int **a, int **b)
{
    int i,j, sum[m][n];
    cout << "You are in addition function\n";
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        sum[i][j]=a[i][j] + b[i][j];
    }
    cout << "The elements after addition are:\n";
    for(i=0; i<m; i++)
    {
        cout << "\n";
        for(j=0; j<n; j++)
        cout << "\t" << " " <<   sum[i][j];
    }

}
void sub(int **a, int **b, int m , int n)
{
    int i,j, s[m][n];
    cout << "You are in substraction function\n";
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        s[i][j]=a[i][j] - b[i][j];
    }
    cout << "The elements after substraction are:\n";
    for(i=0; i<m; i++)
    {
        cout << "\n";
        for(j=0; j<n; j++)
        cout << "\t" << " " <<   s[i][j];
    }
}
void mul(int **a, int **b, int m, int n, int m1, int n1)
{
    int mal[m][n1], i, j, k;  // rows of first matrix and cols of second matrix
    for(i=0; i<m; i++)
    {
        for(j=0; j<n1; j++)
        {
            mal[i][j]=0;
            for(k=0; k<n1; j++)
                mal[i][j] += a[i][k] * b[k][j];
        }
    }
    cout << "The elements after matrix multiplication are:\n";

    for(i=0; i<m; i++)
    {
        cout << "\n";
        for(j=0; j<n1; j++)
        {
            cout << "\t" << " " << mal[i][j];
        }
    }

}
void trans(int **a, int **b, int m, int n, int m1, int n1)
{
    int i, j, transmata[m][n], transmatb[m1][n1];

    // transpose of mat a
    cout << "transpose of mat a\n"; 
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        transmata[i][j]=a[j][i];
    }

    for(i=0; i<m; i++)
    {
        cout << "\n";
        for(j=0; j<n; j++)
        {
            cout << "\t" << " " << transmata[i][j];
        }
    }

    cout << "\n";
    // transpose of mat b
    cout << "transpose of mat b\n";
    for(i=0; i<m1; i++)
    {
        for(j=0; j<n1; j++)
        transmatb[i][j]=b[j][i];
    }

    for(i=0; i<m1; i++)
    {
        cout << "\n";
        for(j=0; j<n1; j++)
        {
            cout << "\t" << " " << transmatb[i][j];
        }
    }
}

int main()
{
    int n, m, **a, **b , i, j, m1, n1, e;
    cout << "Enter rows and cols of 1st matrix resp.: ";
    cin >> m >> n;

    a=new int*[m]; // array of pointers of size rows

    for(i=0; i<m; i++)
    {
        a[i]=new int[n]; // memory allo of cols using array of pointers
    }

    // insert values

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << "\na" << "[" << i << "]" <<  "[" << j << "]" << " = ";
            cin >> a[i][j];
        }
    }

    cout << "Enter rows and cols of 2nd matrix resp.: ";
    cin >> m1 >> n1;

    b=new int*[m1]; // array of pointers of size rows

    for(i=0; i<m1; i++)
    {
        b[i]=new int[n1]; // memory allo of cols using array of pointers
    }

    // insert values
    for(i=0; i<m1; i++)
    {
        for(j=0; j<n1; j++)
        {
            cout << "\nb" << "[" << i << "]" <<  "[" << j << "]" << " = ";
            cin >> b[i][j];
        }
    }

        e=1;
        while(e)
    {
        cout << "\nPress 1 for add, 2 for sub, 3 for mul, 4 for transpose, 0 to terminate: ";
        cin >> e;
        switch (e)
        {
        case 1:
        {
            if(m != m1 || n != n1)
            {
                cout << "The rows or cols are not equal to matrix 1\n";
                e=0;
                break;
            }
            else
            {
                add(m,n,a,b);
                break;
            }
        }
        case 2:
        {
            if(m != m1 || n != n1)
            {
                cout << "The rows or cols are not equal to matrix 1\n";
                e=0;
                break;
            }
            else
            {
                sub(a, b, m, n);
                break;
            }
        }
        case 3:
        {
            if(n != m1)
            {
                cout << "Mul cannot happen\n";
                e=0;
                break;
            }
            else
            {
            mul(a, b, m, n, m1, n1);
            break;
            }
        }
        case 4:
        {
            trans(a, b, m, n, m1, n1);
            break;
        }
        case 5:
        {
            cout << "EXIT\n";
            break;
        }
        default:
        {
            e=0;
            break;
        }
        }
    }

    

    
    return 0;
}
*/