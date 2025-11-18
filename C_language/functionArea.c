#include<stdio.h>
void squre(int side);
void circle(float rad);
int ractangle(int a,int b);
int main(){
   // int n;
    int a=5;
    int b=3;
    // printf("enter radius: ");
    // scanf("%d",&n);
    // squre(n);
    // circle(n);
   printf("area is:%d\n", ractangle(a,b));
  
   return 0;
}
void squre(int side){
    printf("area of squre is: %d\n",side*side);
}
void circle(float rad){
    printf("area of circle is: %f\n",3.14*rad*rad);
}
int ractangle(int a,int b){
    return a*b;
}