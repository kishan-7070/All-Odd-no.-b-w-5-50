#include <stdio.h>

int main() {
    int n;
    int sum=0;
    scanf("%d", &n);
   
    
    
    
    // Complete the code
    while(n>0) {
        int remainder=n%10;
         sum=sum+remainder;
         n=n/10;
    }
    printf("%d",sum);
    return 0;
}
