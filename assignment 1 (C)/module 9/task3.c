#include <stdio.h>

float calculateAverageSpend(int orders[], int size){
    int total = 0;
    for (int i = 0; i < size; i++){
        total += orders[i];
    }return (float)total / size;
}
int main(){
    int dailyOrders[7] = {250, 420, 180, 350, 600, 850, 290};
    int days = 7;
    float average=calculateAverageSpend(dailyOrders, days);
    printf("=== Zomato Weekly Spend Analysis ===\n");
    for (int i = 0; i < days; i++){
        printf("Day %d: ₹%d\n", i + 1, dailyOrders[i]);
    }
    printf("\nAverage daily spend: ₹%.2f\n", average);
    return 0;
}