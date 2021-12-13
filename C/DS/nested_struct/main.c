#include <stdio.h>

void main()
{
    // program to demostrate nested structures
    // first put the inner-most structure and then go to
    // outer structure with inner most in it.

    // First name structure.

    typedef struct
    {
        char first_name[20];
        char middle_name[20];
        char last_name[20];
    } NAME;

    // Now the date of birth which contains dd/mm/yy

    typedef struct
    {
        int dd;
        int mm;
        int yy;
    } DOB;

    typedef struct
    {
        int roll_no;
        NAME name;
        DOB date;
        float fees;

    } student;

    student stud1;

    // If I want student's first name then:



    printf("%s %s %s\n",stud1.name.first_name,stud1.name.middle_name,stud1.name.last_name);
}
