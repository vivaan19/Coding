#include <stdio.h>
#include <stdlib.h>
// program to demostrate function in C
/* basic syntax::
1. Function Declaration- return_type function_name(parameters).
2. In main function ::
    (a)- Variable declaration
    (b)- Function Call -- function_name(actual parameters)
    (c)- Statement after function call.
3. Function Defination - return_type function_name(formal parameters)
                            {
                                statement........1
                                statement.........2
                                ...........
                                ...........
                            }
*/

int add(int,int); // Function Declaration

int main()
{
    int a,b,c;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);

    c=add(a,b);// Function Call

    printf("The addition is %d\n",c);

}
int add(int x ,int y) // Function Defination
{
    int z;
    z=x+y;
    return z;
}








