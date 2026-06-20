#include<stdio.h>
    int main(){
        int quantity;
        printf("Your quantity:");
        scanf("%d",&quantity);
        if(quantity>4){
            printf("\nyou'r eligible for makinf a BILL");
        }
        else{
            printf("\nyou'r not eligible for makinf a BILL");
        }
    return 0;
}