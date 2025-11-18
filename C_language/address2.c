#include<stdio.h>

void print(int *a){
    printf("%d\n",a);
}
int main(){
    int n=4;
    printf("%u\n",&n);
    print(&n);
}