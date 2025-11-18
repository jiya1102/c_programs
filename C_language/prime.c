#include<stdio.h>
int main(){

    int n;
    int count=0;

    printf("enter number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
       if(n%i==0){
        count++;
         } 
    }
    
    
    if(count==2){
      printf("prime no.");
    }else{
        printf("not a prime no.");
    }
    
    
    return 0;
}