#include<stdio.h>
int main(){
    int a,b;

    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    
    int *ptr=&a;
    int *ptr2=&b;
    
    if(*ptr<*ptr2){
        printf("max is:%d",*ptr2);
    }else{
        printf("max is:%d",*ptr);
    }
}