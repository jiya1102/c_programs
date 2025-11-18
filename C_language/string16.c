#include<stdio.h>
// WAP to replace lowercase letters with uppercase & vice versa in a string.
int main(){
    
    char str[100];
   

    printf("Enter a string: ");
    gets(str);  // Use fgets in modern code instead of gets for safety

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase
        } 
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // convert to lowercase
        }
    }

    printf("Converted string: %s", str);

    return 0;

}