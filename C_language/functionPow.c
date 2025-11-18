#include<stdio.h>
#include<math.h>

int mypower(int base,int exp);
int main (){
    int base,exp;
    printf("enter base:");
    scanf("%d",&base);
    printf("enter exponent:");
    scanf("%d",&exp);
   printf("%d",mypower(base,exp)); 

}
int mypower(int base,int exp){
  return pow(base,exp);
  //int result=1;
    // for(int i=1;i<=exp;i++){
    //   result=result*base;
    // }
    // return result;
    // 
}