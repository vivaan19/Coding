#include <iostream>
using namespace std;

int main()
{
    int my_arr[5], i, count=0, rem, count1=0;

    cout << "Enter 5 numbers:\n";

    for(i=0; i<5; i++)
    {
        cin >> my_arr[i]; 
    }

    for(i=0; i<5; i++)
    {
        while(my_arr[i] != 0)
        {
            rem=my_arr[i]%10;

            if(rem == 3)
                count++;
            if(rem == 7)
                count1++;
            my_arr[i] = my_arr[i]/10;
        }

        cout << "Number:" << i+1 << ":: 3 = " << count << ", 7 = " << count1 << "\n";

        count = 0;
        count1 = 0; 
    }

    
    return 0;
}
