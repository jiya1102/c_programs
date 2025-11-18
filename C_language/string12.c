#include<stdio.h>
//check if a given character is present in a string or not.
void checkchar(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("character is present!");
            return;
        }
    }
    printf("character is not present");
}

int main(){
    char str[]="globalcollege";
    char ch='e';
    checkchar(str,ch);

}
