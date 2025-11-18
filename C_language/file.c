#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("test.txt","r");
//     if(fptr==NULL){
//    printf("file  doesnt exist");
//     }else{
//        fclose(fptr);
//     }
        char ch;
       fscanf(fptr,"%c",&ch);
       printf("character is:%c",ch);
    return 0;

}