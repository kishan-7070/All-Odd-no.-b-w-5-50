#include<stdio.h>
int a,b;
int sum(int a,int b);
int prod(int a,int b);
int avg(int a,int b);

int main () {
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);


printf("sum is %d\n",sum(a,b));
printf("product is %d\n",prod(a,b));
printf("average is %d\n",avg(a,b));
return 0;
}
int sum(int a,int b){
    
    return a+b;
}
int prod(int a,int b){
    int k=a*b;
    return k;
}
int avg(int a,int b){
    int k=(a+b)/2;;
    return k;
}