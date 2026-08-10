#include<stdio.h>
float calculateBill(int units){
    if(units<=100){
        calculateBill(units*2);
    }else if (units<=200)
    {
        calculateBill(units*4);
    }
    else{
        calculateBill(units*6);
    }
    
}
int main(){
    printf("\nYOUR BILL: %f",calculateBill(100));
    return 0;
}