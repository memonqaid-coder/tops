#include <stdio.h>

int main(){
    int dailySteps[7]={4500, 7200, 6100, 8500, 5000, 10200, 9300};
    char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("=== Weekly Daily Step Count ===\n");
    for (int i = 0; i < 7; i++){
        printf("%-10s: %d steps\n", days[i], dailySteps[i]);
    }
    return 0;
}