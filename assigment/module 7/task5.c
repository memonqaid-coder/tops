#include <stdio.h>

int main() {
    int rows;
    printf("\nEnter rows values except 0 and 1:");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}