#include<stdio.h>
void printtable (int n) ;
int i;
int main ()  {
    int n;
    printf("Enter number");
    scanf("%d",&n);
     for(int i=1;i<=10;i++){
        printf("table is %d\n",n*i);
    }
    return 0;
}
void printtable (int n) {
   printf("%d\n",n*i);
    
}