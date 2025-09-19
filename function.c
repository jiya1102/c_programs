#include<stdio.h>
//function declaration
void printHello();
void goodbye();
int main(){
    printHello();//function call
    goodbye();
    return 0;
}//function definition
void printHello(){
    printf("hello!\n");
    printf("my best friend\n");
}
void goodbye(){
     printf("goodbye!");
}