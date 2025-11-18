#include<stdio.h>
#include<string.h>
//user define datatype
//WAP to store the data of 3 students.
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1 ={"jiya",2345,8.2};// initialising of struct 
    // s1.roll=246;
    // s1.cgpa=7.5;
    // strcpy(s1.name,"jiya");
    struct student *ptr=&s1;
    

    printf("name with ptr is:%s\n",(*ptr).name);
     printf("name  with -> is:%s\n",ptr->name);
    printf("roll  is:%d\n",s1.roll);
    printf("cgpa is:%f\n",s1.cgpa);

    struct student s2;  
    s2.roll=244;
    s2.cgpa=6.5;
    strcpy(s2.name,"janvi");
    

    printf("name is:%s\n",s2.name);
    printf("roll  is:%d\n",s2.roll);
    printf("cgpa is:%f\n",s2.cgpa);

    struct student s3;  
    s3.roll=242;
    s3.cgpa=8.5;
    strcpy(s3.name,"jass");
    

    printf("name is:%s\n",s3.name);
    printf("roll  is:%d\n",s3.roll);
    printf("cgpa is:%f\n",s3.cgpa);

}