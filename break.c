#include<stdio.h>
int main(){
    int x;
    
    for(int i=1; i<=1;i++){
        printf("enter number");
        scanf("%d",&x);
        printf("%d\n",x);
        if(x%2!=0){
            break;
        }
       
    }
    printf("thanks\n");

    // while(1){
    //      printf("enter number");
    //     scanf("%d",&x);
    //     printf("%d\n",x);
    //     if(x%2!=0){
    //         break;
    //     }

    // }
    // printf("thanks\n");

    // do{
    //    printf("enter number");
    //     scanf("%d",&x);
    //     printf("%d\n",x);
    //     if(x%2!=0){
    //         break;
    //     } 
    // }while(1);
    // printf("thanks\n");
    // return 0;
}