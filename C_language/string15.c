#include<stdio.h>
//WAP to remove blank spaces in a string.
int main(){
 char str[]="hello world";
 char newstr[100];
 int j=0;

 for(int i=0;str[i]!='\0';i++){
    if(str[i]!= ' '){
      newstr[j]=str[i];
      j++;
    }
 }
 newstr[j]='\0';
 printf("string without spaces:%s",newstr);
 return 0;

}