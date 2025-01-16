#include<stdio.h>

int main () {
   int n;
   printf("Enter number :");
   scanf("%d",&n);
   
   int sum = 0 ;
   for(int i=2;i<=n;i=i+2) {
       printf("%d\n",i);
       sum = sum + i ;
   }
   printf("sum is %d \n",sum);
   return 0;
   
}
