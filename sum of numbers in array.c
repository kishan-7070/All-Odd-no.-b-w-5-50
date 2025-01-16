#include<stdio.h>

int main () {
    int i;
    int number[5];
for(int i=0;i<5;i++){
    scanf("%d",&number[i]);

}
int sum=0;
for(int i=0;i<5;i++){
    sum=sum+number[i];
   
    
}
 printf("%d",sum);


return 0;
}