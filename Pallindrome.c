// pallindrome number
#include<stdio.h>
int main () {
    int n;
scanf("%d",&n);
int temp=n;
int sum =0;
while(temp!=0) {
    int a=temp%10;
     sum=sum*10+a;
       temp=temp/10;
}
if(n==sum) {
    printf("Pallindrome");
} else printf("not a pallindrome");
    return 0;
}
