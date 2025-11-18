#include<stdio.h>
// WAP to convert all lowercase vowels to uppercase in a string.
int main(){
    char str[]="Helloworld";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'){
            str[i]='A';
        }
        if(str[i]=='e'){
            str[i]='E';
        }
        if(str[i]=='i'){
            str[i]='I';
        }
        if(str[i]=='o'){
            str[i]='O';
        }
        if(str[i]=='u'){
            str[i]='U';
        }

    }
    printf("new str is:%s",str);
    return 0;
}