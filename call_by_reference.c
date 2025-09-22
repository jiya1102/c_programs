#include<stdio.h>

void _squre(int *n);
int main(){
    int number =4;
    _squre(&number);
    printf("number is:%d\n",number);

}
void _squre(int *n){
    *n=(*n)*(*n);
    printf("squre is:%d\n",*n);
}