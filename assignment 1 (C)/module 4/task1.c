/*Q:Create a simple JavaScript function called calculateTotal 
    that takes two numbers: itemPrice and quantity, and returns the 
    total bill amount using arithmetic operators.
  A:*/
#include<stdio.h>
float calculate_total(float itemprice,int quantity){
    float total_bill=itemprice*quantity;
    return total_bill;
}
int main(){
    float price=2999.0f;
    int qty=6;
    float total= calculate_total(price,qty);
    printf("\nitem price: Rs.%.2f",price);
    printf("\nquantity:%d",qty);
    printf("\nTotal Bill:Rs.%.2f",total);
    return 0;
}