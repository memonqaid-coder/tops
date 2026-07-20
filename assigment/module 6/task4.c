//A1: ENTRY CONTROLLED LOOP(WHILE LOOP):
#include <stdio.h>
int main() {
    int temperatureA;
    printf("---AIR CONDITIONER-A--\n");
    printf("\nEnter Your TemperatureA Here:");
    scanf(" %d",&temperatureA);
    if (temperatureA<27){
        printf("\nTurning on the heater at: %d", temperatureA);
    }
    while (temperatureA < 27) {
        temperatureA++;
    }
    printf("\nTemperature is: %d", temperatureA);
//A2:EXIT CONTROLLED LOOP(DO WHILE LOOP):
    int temperatureB;
    printf("\n---AIR CONDITIONER-B--\n");
    printf("\nEnter Your TemperatureB Here:");
    scanf(" %d",&temperatureB);
    printf("\nTurning on heater at: %d", temperatureB);
    do {
        temperatureB++;
    } while (temperatureB < 30);
    printf("\nTemperature is: %d\n", temperatureB);
    return 0;
}
/*
-->What Happens If the Condition Is False at the Start?
    >Entry-Controlled (while / for):

    The loop body executes 0 times.
         |
    Execution immediately jumps to the code following the loop.


    >Exit-Controlled (do-while):

    The loop body executes 1 time.
         |
    The condition is evaluated after the first run; since it evaluates to false, the loop 
    terminates without repeating.*/