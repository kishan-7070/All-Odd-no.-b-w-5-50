
#include <stdio.h>

int main()
{
    int i;
for(i=1;i<=4;i++) {
    // numbers
    for(int j=1;j<=i;j++) {
        printf("%d",j);
    }
    //space
    for(int j=1;j<=8-(2*i);j++) {
        printf(" ");
    }
     for(int j=i;j>=1;j--) {
        printf("%d",j);
}
    printf("\n");
}
    return 0;
}