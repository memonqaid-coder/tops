#include<stdio.h>
float calculateEMI(int PA){
    return PA/12;
}
int main(){
    printf("\nMonthly Installment:%.2f",calculateEMI(110000));
    return 0;
}