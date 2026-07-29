#include<stdio.h>
int main(){
    float amount;
    float discount;
    float discount_amount;
    float finalamount;
    printf("\nEnter Your Exact Amount:");
    scanf("%f",&amount);
    if (amount > 2000){
       discount=0.20;
    }else if (amount>1000){
       discount=0.10;
    }else{
       discount=0.0;
    }
    discount_amount=amount*discount;
    finalamount=amount-discount_amount;
    printf("\n--- Receipt ---");
    printf("\nDiscount Applied: %.0f%%", discount * 100);
    printf("\nDiscount Savings: %.2f", discount_amount);
    printf("\nFinal Amount to Pay: %.2f", finalamount);

    return 0;
   }