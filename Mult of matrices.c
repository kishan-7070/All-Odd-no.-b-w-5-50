#include<stdio.h>
int main () {
    int row,col,i,j,k;
    printf("Enter Rows : ");
    scanf("%d",&row);
    printf("Enter col : ");
    scanf("%d",&col);
    int arr1[row][col],arr2[row][col],mul[row][col];
    for(i=0;i<row;i++)  {
        for(j=0;j<col;j++){
        printf("Enter %d %d:",i,j);
        scanf("%d",&arr1[i][j]);
    }
}
 for(i=0;i<row;i++)  {
        for(j=0;j<col;j++){
        printf("Enter %d %d:",i,j);
         scanf("%d",&arr2[i][j]);
    }
}
for(i=0;i<row;i++) {
    for(j=0;j<col;j++) {
        mul[i][j]=0;
    }
}
for(i=0;i<row;i++) {
    for(j=0;j<col;j++) {
        for(k=0;k<col;k++) {
        mul[i][j]+=arr1[i][k]*arr2[k][j];
        
    }
    printf("\n");
}
}

for(i=0;i<row;i++) {
    for(j=0;j<col;j++) {
        printf(" %d ",mul[i][j]);
    }
    printf("\n");
}


return 0;
}

