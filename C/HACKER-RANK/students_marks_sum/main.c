#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.

  if(gender == 'g')
  {
      int add=0;
      if(number_of_students == 1)
        return 0;
      else
      {
          for(int i=0; i<number_of_students/2; i++)
            add=add+marks[(2*i)+1];

            return add;
      }
  }

  else if(gender == 'b')
  {
      int add=0;
      if(number_of_students == 1)
        return marks[0];
      else
      {
          for(int i=0; i<=number_of_students/2; i++)
            add=add+marks[2*i];
          return add;
      }
  }
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
