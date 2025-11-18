#include<stdio.h>
int main(){
  int age=20;
  int *ptr=&age;
  int _age=*ptr;
  //address print karne ke liye
  printf("%p\n",&age);
  printf("%u\n",&age);
  printf("%u\n",ptr);
  printf("%u\n",&ptr);

  //value print karne ke liye
  printf("%d\n",age);
  printf("%d\n",*ptr);
  printf("%d\n",*(&age));

  
  
  return 0;
}