#include<stdio.h>
int main(){
    int a=4;
    int *ptr=&a;
    printf("%u\n",&a);
    printf("%u\n",ptr);
}