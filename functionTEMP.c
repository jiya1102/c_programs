#include<stdio.h>

void checkTemp(int temp);

int main(){
    int temp;
    printf("enter temp :");
    scanf("%d",&temp);
    checkTemp(temp);
    
    return 0;

}
void checkTemp(int temp){
    
    if(temp>=30){
       printf("Hot"); 
    }else {
      printf("cold");  
    }
}
