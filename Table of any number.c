#include<stdio.h>

int main () {
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    
    for(int i=1;i<=10;i=i+1) {
        printf("table is %d\n",n*i);
    }
    return 0;
}