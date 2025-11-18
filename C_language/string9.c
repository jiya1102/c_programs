#include<stdio.h>
#include<string.h>
// Q.find the salted form of a password enterred by user if the salt is "123" & added at the end.
void salting(char password[]);
int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
}
void salting(char password[]){
     char salt[]="123";
    char newpass[200];
    strcpy(newpass,password);// newpass = "test"
    strcat(newpass,salt);// newpass = "test" + "123"
    puts(newpass);
   
}