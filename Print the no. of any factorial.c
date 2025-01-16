#include<stdio.h>

int main () {
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    
    int fact = 1;
    for(int i=1;i<=n;i=i+1) {
        
        fact=fact*i;
      
    }
      printf("%d\n",fact);
      
    return 0;
}