#include<stdio.h>
int main () {
    int n,i;
    printf("Enter a nuumber : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        printf("Enter elements : %d ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
        if(arr[j]>arr[j+1]) {
            int c=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=c;
        } 
    }
    }
     for(i=0;i<n;i++) {
        printf(" %d ",arr[i]);
     }
        return 0;
}