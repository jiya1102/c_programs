#include<stdio.h>
#include<math.h>
int sum(int a,int b);

int main (){
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("print second number: ");
    scanf("%d",&b);
    int finalSum=sum(a,b);
   printf("sum is: %d",finalSum);
    return 0;

// int n=4;
// printf("%f",pow(n, 2));
// return 0;
}
int sum(int x,int y){
     return x+y;
}