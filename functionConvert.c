#include<stdio.h>

float convertTemp(float celsius);

int main(){
  printf("far is: %f",convertTemp(37));
}
float convertTemp(float celsius){
    float far=celsius*(9.0/5.0)+32;
    return far;
}