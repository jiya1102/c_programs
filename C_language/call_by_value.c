#include<stdio.h>
void squre(int n);
int main(){
    int number=5;
    squre(number);
    printf("number is:%d\n",number);

}
//call by value
void squre(int n){
    n=n*n;
    printf("squre is:%d\n",n);
}