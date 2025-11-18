#include<stdio.h>
//use of typedef keyword
 typedef struct ComputerScienceStudent{
    char name[100];
    int roll;
    float cgpa;
}cse;//short from
int main(){
    cse s1={"jiya",1664,8.02};

    printf("name is:%s",s1.name);
    return 0;

}