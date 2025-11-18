#include<stdio.h>
#include<string.h>
//structure to function
struct student{
    char name[100];
    int roll;
    float cgpa;
};
void printinfo(struct student s1);
int main(){
   struct student s1 ={"jiya",2345,8.2};
   printinfo(s1);
   return 0;
}
void printinfo(struct student s1){
    printf("student information:\n");
    printf("name is:%s\n",s1.name);
    printf("roll  is:%d\n",s1.roll);
    printf("cgpa is:%f\n",s1.cgpa);
}