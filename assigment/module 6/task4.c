//A1: ENTRY CONTROLLED LOOP(WHILE LOOP):
#include <stdio.h>
int main() {
    int temperatureA;
    printf("---AIR CONDITIONER-A--\n");
    printf("\nEnter Your TemperatureA Here:");
    scanf(" %d",&temperatureA);
    while (temperatureA < 27) {
        printf("\nTurning on the heater at:");
        temperatureA++;
    }
    printf("\nTemperature is: %d", temperatureA);
//A2:EXIT CONTROLLED LOOP(DO WHILE LOOP):
    int temperatureB;
    printf("\n---AIR CONDITIONER-B--\n");
    printf("\nEnter Your TemperatureB Here:");
    scanf(" %d",&temperatureB);
    do {
        printf("\nTurning on heater at:");
        temperatureB++;
    } while (temperatureB < 30);
    printf("\nTemperature is: %d\n", temperatureB);
    return 0;
}