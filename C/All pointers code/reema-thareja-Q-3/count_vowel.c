#include<stdio.h>
void count_vowel(char ch[] ,int *);

void main()
{
    int count=0;
    char ch[10];

    printf("Enter the text:");
    gets(ch);
  
    count_vowel(ch ,&count); // ch--base address 

    printf("The total vowel in the text is %d\n",count);
}

void count_vowel(char *p , int* c) // charater pointer variable p 
{
    int i=0;
    

    while(p[i] != '\0')
    {
        if(p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' 
        || p[i] == 'u'|| p[i] == 'A' || p[i] == 'E' ||p[i] == 'I' ||p[i] == 'O' ||p[i] == 'U')
        
         (*c)++;
        
      i++;
    }
}
