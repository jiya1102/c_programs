#include<stdio.h>
void table(int n);
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
   table(n);//argument/actual parameter
   


}
void table(int n){//parameter/formal paramter
    for(int i=1;i<=10;i++){
      printf ("%d\n",n*i);
    }
    
}