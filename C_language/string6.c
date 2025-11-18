#include<stdio.h>
//make a program that inputs users name & prints its length.
int  countLenght(char str[]);
int main(){
    char str[100];
    fgets(str,100,stdin);

    printf("lenth is: %d",countLenght (str));
    return 0;
}

int countLenght(char str[]){
    int count =0;
    for(int i=0;str[i]!='\0';i++){
         count++;
    }
    
    return count-1;
}