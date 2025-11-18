#include<stdio.h>
int main(){
    // int age;
    // printf("enter age");
    // scanf("%d",&age);
    
    // if(age>=18){
    //     printf("adults\n");
    // }else if(age>13&&age<18){
    //     printf("teenager\n");
    // }else{
    //     printf("not adults\n");
    // }
    // printf("thank you\n");
    // return 0;

    //WAP to check if student passed or failed.
    //  int marks;
    // printf("enter marks(0-100)");
    // scanf("%d",&marks);
    // if(marks>30 && marks<100){
    //     printf("student is passed\n");
    // }else if(marks>=0 && marks<=30){
    //     printf("student is failed\n");
    // }else{
    //     printf("wrong marks");
    // }

    //WAP to find if a character entered by user is upper case or not.
    char ch;
    printf("enter character");
    scanf("%c",&ch);

    if(ch>='a'&& ch<='z'){
        //ch>=97 & ch>='a'
        printf("lower case\n");

    }else if (ch>='A'&& ch<='Z'){
        printf("upper case\n");
    }else{
        printf("not a english letter ");
    }



}