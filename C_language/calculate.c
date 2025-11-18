#include<stdio.h>
void calculate(int a, int b,int *sum,int *product,int *avg);
int main(){
    int a=3,b=5;
    int sum,product,avg;
    
    calculate(a,b,&sum,&product,&avg);
    printf("sum is:%d\n product is: %d\n avg is:%d\n",sum,product,avg);


}
void calculate(int a, int b,int *sum,int *product,int *avg){
     *sum =a+b;
     *product=a*b;
     *avg=(a+b)/2;
    
   // printf(" sum is:%d\n product is: %d\n avg is:%d\n",sum,product,avg);
}