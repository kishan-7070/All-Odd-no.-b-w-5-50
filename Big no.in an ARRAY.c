/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
     scanf("%d",&n);
    int array[n];
   
    for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
    }
      int maxi = array[0];
      for(int i=1;i<n;i++){
          if(array[i]>maxi){
              maxi = array[i];
          }
          
      }
      printf("%d",maxi);
    
   
  

return 0;
}