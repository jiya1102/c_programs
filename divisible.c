#include<stdio.h>
#include<math.h>

int main(){
    int x;
    printf("enter number:");
    scanf("%d\n",&x);
    printf("%d",x% 2 == 0 );
    return 0;
}