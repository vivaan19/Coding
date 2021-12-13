#include <bits/stdc++.h>
using namespace std;
int i=0;
int j=0;
class queue1
{
    int a[5];
    public:
    void put(int);
    int get(void);
};  

void queue1 :: put(int item)
{
    a[i]=item;
    i++;

    cout << "The value " << item << " got inserted\n";
    
}

int queue1 :: get(void)
{
    int val;
    val=a[j];
    j++;
    return val;
}

int main()
{ 
    int n;  
    queue1 obj;
    cout << "Only 5 numbers to be inserted\n";
    obj.put(1);
    obj.put(2);
    obj.put(3);
    obj.put(4);
    obj.put(5);

    for(n=0; n<5; n++)
    cout << "Element " << n+1 << " = " << obj.get() << "\n";
    return 0;
}
