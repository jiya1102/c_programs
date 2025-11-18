#include<stdio.h>
void namste();
void bonjour();
int main(){
  char ch;
  printf("enter 'i' for indian & 'f' for france: ");
  scanf("%c",&ch);
  if(ch=='i'){
    namste();
  }else if(ch=='f'){
    bonjour();
  }else{
    printf("invalid");
  }
}
void namste(){
    printf("namste\n");
}
void bonjour(){
    printf("bonjour\n");
}