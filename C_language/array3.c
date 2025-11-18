#include<stdio.h>
int main(){
    int age=22;
    int age2=24;
    int *ptr=&age;
    int *ptr2=&age2;
    
    // printf("ptr is %d\n",*ptr);
    // ptr++;
    // printf("ptr is %d\n",ptr);
    // ptr--;
    // printf("ptr is %d\n",ptr);

    printf("diffrence is:%u\n",ptr-ptr2);
    ptr2=&age;
    printf("camparision is:%u\n",ptr==ptr2);

}