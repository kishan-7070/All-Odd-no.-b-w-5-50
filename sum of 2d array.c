#include<stdio.h>
int main () {
    int row,col,i,j;
    printf("Enter row :");
    scanf("%d",&row);
    printf("Enter col :");
    scanf("%d",&col);
    int arr1[row][col],arr2[row][col],sum[i][j];
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            printf("Element of arr1 %d %d:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
             printf("Element of arr2 %d %d:",i,j);
           scanf("%d",&arr2[i][j]);
        }
         
    }
     for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d",sum[i][j]);
        }
        printf("\n");
     }
    
    return 0;
}