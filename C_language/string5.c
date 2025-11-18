#include<stdio.h>
// string using pointers
int main(){
    char *str ="hello world";//can be reintialized
    puts(str);
    str="hello";
    puts(str);

    char string[]="hello world";//can not be reintialized
    puts(string);
    
}