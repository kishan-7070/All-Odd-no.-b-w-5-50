#include<stdio.h>
void reverse(int arr[],int n);

int main () {
    int arr[] = {1,2,3,4,5};
    reverse(arr,5);
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;

    


    
}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstValue=arr[i];
        int lastValue=arr[n-i-1];
     arr[i]=lastValue;
   arr[n-i-1]=firstValue;
    }
}