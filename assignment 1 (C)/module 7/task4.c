#include <stdio.h>

int main() {
    int rows = 4;
    int cols = 4;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j)%2== 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}