#include<stdio.h>
//enter address of five people.
struct address {
   int HouseNo;
   int Block;
   char city[100];
   char state[100];

};
int main(){
    struct address add[5];
    //input
    printf("enter info for person:");
    scanf("%d",&add[0].HouseNo);
    scanf("%d",&add[0].Block);
    scanf("%s",add[0].city);
    scanf("%s",add[0].state);

    printf("address is:%d,%d,%s,%s",add[0].HouseNo,add[0].Block,add[0].city,add[0].state);


}
