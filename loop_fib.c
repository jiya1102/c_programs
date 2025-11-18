#include<stdio.h>
int main(){
    int n,nextTerm;
    int t1=0;
    int t2=1;
    printf("enter number:");
    scanf("%d",&n);
     printf("fibonacci series is:");

    for(int i=0;i<=n;i++){
        printf("%d ",t1);
        nextTerm=t1 +t2;
        t1=t2;
        t2=nextTerm;
        
    }
    
    return 0;
}