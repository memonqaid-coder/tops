#include <stdio.h>

int main(){
    float orders[5]={250.50, 420.00, 180.75, 599.99, 310.00};
    float *ptr = orders;
    printf("Zomato Order Amounts and Memory Addresses:\n");
    printf("-------------------------------------------\n");
    for (int i = 0; i < 5; i++){
        printf("Order %d: Amount = ₹%.2f | Address = %p\n", i + 1, *(ptr + i), (void*)(ptr + i));
    }
    return 0;
}