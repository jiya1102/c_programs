#include<stdio.h>
int main(){
    //use of gets, puts,& fgets
    
    char name[100];
    //gets(name);
    fgets(name,100,stdin);//input a string
    puts(name);//output a string
}