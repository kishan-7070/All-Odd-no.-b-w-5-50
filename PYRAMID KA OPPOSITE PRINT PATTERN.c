
#include <stdio.h>

int main()
{
    int i;
    for(i=1;i<=5;i++) {
      
        //space
        for(int j=1;j<=i-1;j++) {
             printf(" "); 
        }
            for(int k=1;k<=10-2*i+1;k++) {
             printf("*");
            }
                for(int m=1;m<=i-1;m++)  {
                      printf(" ");
                }
               printf("\n");
    }
   

    return 0;
}