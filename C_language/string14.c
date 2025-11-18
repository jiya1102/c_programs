#include<stdio.h>
// WAP to print the highest frequency character in a string.
int  charfreq(char str[],char ch);
int main(){
    char str[]="helloworld";
    char ch='o';
   printf("highest frequency of character %c,is: %d", ch,charfreq(str,ch)); 


}
int charfreq(char str[],char ch){
    int count =0;
    for(int i=0;str[i]!='\0';i++){
if(str[i]==ch){
    count++;
}
    }
    return count;
}