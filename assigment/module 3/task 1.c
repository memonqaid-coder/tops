#include <stdio.h>

int main() {
    // 1. Variable declaration and initialization
    char productName[] = "Wireless Earbuds"; // String (Character Array)
    float price = 2499.50f;                   // Float
    double rating = 4.2;                      // Double

    // 2. Printing variables along with their data types
    printf("--- Flipkart Product Details ---\n");
    
    printf("Product Name : %s\n", productName);
    printf("Data Type    : String (char[])\n\n");
    
    printf("Price        : %.2f\n", price);
    printf("Data Type    : Float\n\n");
    
    printf("Rating       : %.1lf\n", rating);
    printf("Data Type    : Double\n");

    return 0;
}