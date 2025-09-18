#include<stdio.h>
int main(){
    int n,sum;
    printf("enter number");
    scanf("%d",&n);
    sum=0;
    for(int i=1;  i<=n;i++){
        sum =sum+i;
       printf("%d\n",i);

    }
     printf("sum is:%d\n",sum);

}