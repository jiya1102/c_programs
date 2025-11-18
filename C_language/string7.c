#include<stdio.h>
#include<string.h>
//standard library function

int main (){
    // char name[]="jay";
    // printf("lenght is :%d",strlen(name));// 1. string lenght 

    // char newstr[]="jiya";
    // char oldstr[]="janvi";
    // strcpy(newstr,oldstr);// 2. string copy
    // printf("%s",newstr);

    // char firstStr[100]="hello ";
    // char secondStr[]="world";
    // strcat(firstStr,secondStr);// 3.string concatination
    // puts(firstStr);

    char firstStr[]="apple";
    char secondStr[]="banana";
   printf("%d", strcmp(firstStr,secondStr));// 4.string comparision
    

    return 0;
}