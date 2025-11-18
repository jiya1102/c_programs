#include<stdio.h>
int calcPercentage(int science,int math,int sanskrit);

int main(){
    int science=96;
    int math=98;
    int sanskrit=94;
    printf("percentage is: %d",calcPercentage(science,math,sanskrit)) ;
}
int calcPercentage(int science,int math,int sanskrit){
    int percentage=((science+math+sanskrit)/3);
    return percentage;
}