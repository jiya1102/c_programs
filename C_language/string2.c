#include<stdio.h>
int main(){
    char firstName[]="jiya";
    char lastName[]="soni";

    for(char i=0;firstName[i]!='\0';i++){
        printf("%c",firstName[i]);
    }
    printf("\n");
    for(char i=0;lastName[i]!='\0';i++){
        printf("%c",lastName[i]);
    }

    return 0;
}