#include<stdio.h>

void printHLW(int count);

int main(){
    printHLW(5);
    return 0;
}
//recursive function
void printHLW(int count){
    if(count==0){
        return;
    }
    printf("hello!\n");
    printHLW(count-1);
}