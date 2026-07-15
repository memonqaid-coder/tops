/*Q:Build a Flipkart-style discount calculator: given product price, 
    discount percentage, and a boolean isMember, use arithmetic and 
    logical operators to calculate the final price (apply an extra 5% off if isMember is true).
  A:*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    float productprice=7899.99f;
    float discountpercent=10.0f;
    bool isMember;
    float totaldiscountprice=discountpercent;
     if (isMember){
        totaldiscountprice+=5.0f;
    }
    float discountamount=productprice*totaldiscountprice/100.0f;
    float finalprice=productprice-discountamount;
    printf("\nOriginal Price:Rs.%.2f",productprice);
    printf("\nBase Discount:%.0f%%",discountpercent);
    printf("\nPlus Member Extra:%s",isMember?"yes(Extra 5% Off)":"No");
    printf("\nTotal Discount Applied:%.0f%%",totaldiscountprice);
    printf("\nTotal Savings:Rs.%.2f",discountamount);
    printf("\nFinal Payable Amount:Rs.%.2f",finalprice);
    return 0;
}