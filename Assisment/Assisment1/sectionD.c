#include <stdio.h>

#define SIZE 5


void sortArray(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[SIZE];
    int sum = 0;
    int i;

    printf("Enter %d integers:\n", SIZE);


    for (i = 0; i < SIZE; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }


    sortArray(numbers, SIZE);


    int min = numbers[0];
    int max = numbers[SIZE - 1];
    float mean = (float)sum / SIZE;


    printf("\n=========================================\n");
    printf("               RESULTS\n");
    printf("=========================================\n");
    printf("Minimum Value   : %d\n", min);
    printf("Maximum Value   : %d\n", max);
    printf("Arithmetic Mean : %.2f\n", mean);

    printf("Sorted List     : ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");


    float distToMin = mean - min;
    float distToMax = max - mean;
    float epsilon = 0.0001f;

    if (distToMin > distToMax + epsilon) {
        printf("Mean Proximity  : Closer to MAXIMUM\n");
    } else if (distToMax > distToMin + epsilon) {
        printf("Mean Proximity  : Closer to MINIMUM\n");
    } else {
        printf("Mean Proximity  : Exactly MIDWAY between Min and Max\n");
    }

    printf("=========================================\n");

    return 0;
}