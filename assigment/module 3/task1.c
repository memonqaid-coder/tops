/*Q: eclare variables for a Flipkart product: productName (as a string), 
  price (float), and rating (double). Assign sample values and print each 
  variable with its data type.
  A: */
#include <stdio.h>
int main() {
    // 1. Variable declaration and initialization
    char productName[] = "Apple Watch";
    char FREEProduct[]= "Adaptor"; 
    float price = 4999.99f;
    int price2 = 0;                 
    double rating = 4.8; 
    double rating2 = 3.7;    
    float TOTALPAY=price+price2;           
    // 2. Printing variables productName*FREEProductalong with their data types
    printf(" __Flipkart Product Details__ \n");
    printf("\nProduct Name : %s", productName);
    printf("\nFREEProduct : %s", FREEProduct);
    /*printf("Data Type    : String (char[])\n");*/
    printf("\nPrice        : %.2f", price);
    printf("\nPrice2        : %d", price2);
    /*printf("Data Type    : Float\n");*/
    printf("\nRating       : %.1lf", rating);
    printf("\nRating2       : %.1lf", rating2);
    printf("\nBUY NOW:%.2f", TOTALPAY);
    /*printf("Data Type    : Double\n");*/
    return 0;
}