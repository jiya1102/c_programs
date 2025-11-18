#include<stdio.h>
#include<string.h>
//structure of array
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student cse[100];
    cse[0].roll=2468;
    cse[0].cgpa=8.02;
    strcpy(cse[0].name,"jiya");

    printf("name is:%s",cse[0].name);
   
}
