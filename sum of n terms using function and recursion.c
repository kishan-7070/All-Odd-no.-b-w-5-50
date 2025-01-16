#include<stdio.h>
// declaration
int sum(int n);

//call
int main () {
    printf("sum is %d\n",sum(5));
    return 0;
}

//definition

int sum (int n){
    if(n==1){
        return 1;
    }
    int k=sum(n-1);
    int totalsum=k+n ;
    return  totalsum;
}