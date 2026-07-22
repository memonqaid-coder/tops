#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addToCart(char ***cartPtr, int *sizePtr, int *capacityPtr, const char *productName) {
    if (*sizePtr >= *capacityPtr) {
        *capacityPtr = (*capacityPtr == 0) ? 2 : (*capacityPtr) * 2;
        *cartPtr = realloc(*cartPtr, (*capacityPtr) * sizeof(char *));
    }
    (*cartPtr)[*sizePtr] = malloc(strlen(productName) + 1);
    strcpy((*cartPtr)[*sizePtr], productName);
    (*sizePtr)++;
    printf("Added \"%s\". Updated cart inside function: [ ", productName);
    for (int i = 0; i < *sizePtr; i++) {
        printf("\"%s\"%s", (*cartPtr)[i], (i == *sizePtr - 1) ? "" : ", ");
    }printf(" ]\n");
}
void printCart(char **cart, int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("\"%s\"%s", cart[i], (i == size - 1) ? "" : ", ");
    }printf("]\n");
}
int main() {
    int capacity = 2;
    int size = 0;
    char **myCart = malloc(capacity * sizeof(char *));
    myCart[0] = strdup("samsung galaxy S24 Ultra");
    myCart[1] = strdup("Earphone");
    size = 2;
    printf("\ncart before adding");
    printCart(myCart, size);
    addToCart(&myCart,&size, &capacity, "ALIANWARE 15\n");
    printf("\ncart after adding: ");
    printCart(myCart, size);
    for (int i = 0; i < size; i++) {
        free(myCart[i]);
    }free(myCart);
    return 0;
}