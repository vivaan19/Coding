#include <stdio.h>
#include <stdlib.h>

void main()
{
    char str1[50]="Vivaan";
    char str2[50];
    int i=0;

    printf("str1 is :: %s\n",str1);


    for (i = 0; str1[i] != '\0'; i++) {
		// copying the characters by
		// character to str2 from str1
		str2[i] = str1[i];
	}

	str2[i] = '\0';

	// printing the destination string
	printf("String str2 : %s", str2);
}
