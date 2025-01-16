#include<stdio.h>
int calcpercentage(int science,int math,int sanskrit);

int main () {
    printf("%d",calcpercentage(60,60,60));
    return 0;
}





int calcpercentage(int science,int math,int sanskrit){
    int n=((science+math+sanskrit))/3 ;
    return n;
}