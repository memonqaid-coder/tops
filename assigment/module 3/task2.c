#include<stdio.h>
int main(){
int CUSTOMER_ID=2344990088;
 float GST_Rate = 5.0f;
 float itemprice=840.10f;
 float gstAmount=(itemprice *GST_Rate)/100;
 float finalprice =itemprice+ gstAmount;
 printf("\n___ ZOMATO ORDER BILL ___");
 printf("\nCUSTOMER_ID:22334477");
 printf("\n------------------");
 printf("\nitem price:Rs. %.2f",itemprice);
 printf("\ngst (5%%):Rs. %.2f", gstAmount);
 printf("\n----------");
 printf("\nGRAND TOTAL:Rs. %.2f",finalprice);
 printf("\n-----THANK YOU-----");
 return 0;
}