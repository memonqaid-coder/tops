#include <stdio.h>
#include <string.h>

void formatPrice(int price, char *formattedStr) {
    char temp[20];
    sprintf(temp, "%d", price);
    int len = strlen(temp);
    int j = 0;
    char result[30];
int r_idx = 0;
    strcpy(result, "₹");
    r_idx = strlen(result);
    for (int i = 0; i < len; i++){
        if (i > 0 && (len - i) % 3 == 0){
            result[r_idx++] = ',';
        }result[r_idx++] = temp[i];
    }result[r_idx] = '\0';
    strcpy(formattedStr, result);
}

int main() {
    int prices[3] = {1599, 24999, 499};
    char productName[3][30] = {"Wireless Earbuds", "Smartphone", "Phone Case"};
    char formattedPrice[30];
    printf("=== Flipkart Product Price Tags ===\n");
    for (int i = 0; i < 3; i++){
        formatPrice(prices[i], formattedPrice);
        printf("Product: %-18s | Price: %s\n", productName[i], formattedPrice);
    }
    return 0;
}