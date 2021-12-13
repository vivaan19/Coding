#include <stdio.h>
#include <stdlib.h>
// passing the entire structure with functions
typedef struct
{
    int a;
    int b;
}point;

// function declaration
void display(point);

// main function
void main()
{
    point p1 = {2,3};

    display(p1);
}

// Function defination
 void display(point p)
{
    printf("%d\n",p.a);
    printf("%d\n",p.b);
}






/*
// Passing individual elements through functions.
// Function name- display, displays the values.

typedef struct
{
    int a;
    int b;
}marks;

// 1. Function declaration.
void display(int, int);

// 2. main function.

void main()
{
    marks m1 = {3,4};
    display(m1.a, m1.b);
}

// 3. Function defination.
void display(x, y)
{
    printf("Marks of fist student:%d\n",x);
    printf("Marks of second student:%d\n",y);
}
*/




/*
// Basic structure passing.
void main()
{

typedef struct
{
    int x;
    int y;
}point;

point d1;

d1.x = 3;
d1.y = 4;
printf("%d\n",d1.x);
printf("%d\n",d1.y);
}
*/
