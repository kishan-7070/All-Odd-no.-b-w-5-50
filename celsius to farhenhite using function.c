#include<stdio.h>
float temp(float celsius);

int main () {
    printf("farhenhite is  %f",temp(0));
    return 0;
}



float temp(float celsius){
    float far=celsius*(9/5)+32;
    return far;
}