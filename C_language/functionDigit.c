#include<stdio.h>

int findSumOfDigit(int num){
    int sum =0;
   while(num!=0){
    sum=sum+num%10;
    num=num/10;
    
   }
   return sum;
}
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    printf("sum of digits: %d",findSumOfDigit(num));
    return 0;

}