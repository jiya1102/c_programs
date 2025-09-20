#include<stdio.h>

int printfib(int n);

int main(){
   printf("fibonacci is : %d\n",printfib(7));
   return 0;
}
int printfib(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
   int FIBM1=printfib(n-1);
   int FIBM2=printfib(n-2);
   int FIB=FIBM1+FIBM2;
   return FIB;
}