#include<stdio.h>
int main(){
    
    char ch='a';
    char *ptr=&ch;

    while(*ptr<='z'){
        printf(" %c ",*ptr);
        (*ptr)++;
    }
}