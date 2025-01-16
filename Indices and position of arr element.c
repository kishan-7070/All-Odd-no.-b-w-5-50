#include <stdio.h>

int main() {
    int n;
    printf("Enter Element :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        printf("Enter elements:%d ",i+1);
        scanf("%d",&arr[i]);
    }
    int m;
    printf("Enter element to search: ");
    scanf("%d",&m);
   for(int i=0;i<=n;i++) {
       if(m==arr[i]) {
           //  indices
           printf("Indices %d\n",i);
           printf("Position %d\n",i+1);
           break;
       }
       else printf("Element not found in array\n");
   }
    return 0;
}
