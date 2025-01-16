#include<stdio.h>
int sum ( int a,int b);

int main () {
    int a,b ;
    
   sum (1,2);
   sum(3,5);
   sum(22,33);
   sum(1000000000000000,20000000000);
    return 0;
}

int sum (int a,int b){
     int sum = a+b;
    printf("the sum is %d\n",a+b);
}
