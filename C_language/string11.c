#include<stdio.h>
// write a function to count the accurrence of vowels in a string.
int countVowel(char str[]);
int main(){
    char str[]="helloworld";
    printf("vowels are:%d",countVowel(str));

}
int countVowel(char str[]){
   int  count =0;
    for(int i=0;str[i]!='\0';i++){
     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        count++;
     }
    }
    return count;
}