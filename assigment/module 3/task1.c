/*Q: eclare variables for a Flipkart product: productName (as a string), 
  price (float), and rating (double). Assign sample values and print each 
  variable with its data type.
  A: */
#include <stdio.h>
int main() {
    // 1. Variable declaration and initialization
    char productName[] = "Apple Watch";
    float price = 4999.99f;                  
    double rating = 4.8;                      
    // 2. Printing variables along with their data types
    printf(" __Flipkart Product Details__ \n");
    printf("Product Name : %s\n", productName);
    /*printf("Data Type    : String (char[])\n");*/
    printf("Price        : %.2f\n", price);
    /*printf("Data Type    : Float\n");*/
    printf("Rating       : %.1lf\n", rating);
    /*printf("Data Type    : Double\n");*/
    return 0;
}