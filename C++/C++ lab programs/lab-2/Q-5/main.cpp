#include <bits/stdc++.h> 
int main()
{
         char c[33][49];                     
         int i,j,k;                                 
         for(i=0;i<33;i++)                   
         for(j=0;j<49;j++)
         c[i][j]=32;                        
         int temp;
         for(k=1;k<32;k++)                
         {
                for(j=0;j<49;j=j+6)
               {
                     c[k][j]='|';
               }
         }


         for(i=0;i<33;i=i+4)                 
        {
                 j=0; c[i][j]='+';
                 for(k=0;k<8;k++)
                {
                        temp=j;
                        for(j=(temp+1);j<=(temp+5);j++)
                       {
                        c[i][j]='-';
                       }
                       c[i][j]='+';
               }
       }
       for(i=0;i<33;i++){                         
      for(j=0;j<49;j++)
      std::cout << c[i][j];
      std::cout << "\n";
     }
      return 0;
     }