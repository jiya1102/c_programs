#include<stdio.h>
#include<math.h>
float findsqrt(float n){
     return sqrt(n);
}
int main(){
   float n;
   printf("enter number:");
   scanf("%2f",&n);
   printf("squre root of: %f",findsqrt(n));
   return 0;
}