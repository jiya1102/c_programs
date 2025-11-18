#include<stdio.h>
int main(){
    // for(int i=1;i<=10;i++){
    //     if(i==6){
    //         continue;
    //     }printf("%d\n",i);
    // 

    //print all the odd number from 5 to 10 .
    for(int i=5;i<=50;i++){
        if(i%2==0){
            continue;
        }printf("%d\n",i);
    }
}