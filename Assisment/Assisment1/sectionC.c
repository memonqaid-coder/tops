#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DAYS_IN_WEEK 7
#define NUM_SUBJECTS 3


struct StudyLog{
    char subject[40];
    float hours[DAYS_IN_WEEK];
};
const char *DAYS[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
void logStudyHours(struct StudyLog logs[]);
void viewWeeklyReport(const struct StudyLog logs[]);
void saveAndExit(const struct StudyLog logs[]);
int main(){
    struct StudyLog logs[NUM_SUBJECTS] = {
        {"Mathematics", {0.0}},
        {"Physics",     {0.0}},
        {"Computer Sci", {0.0}}
    };
    int choice = 0;
    while (choice != 3){       
        printf("\n=============================================\n");
        printf("        STUDENT PRODUCTIVITY TRACKER         \n");       
        printf("=============================================\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report & Progress Chart\n");
        printf("3. Save & Exit\n");
        printf("---------------------------------------------\n");
        printf("Enter your choice (1-3): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        switch (choice){
            case 1:
                logStudyHours(logs);
                break;
            case 2:
                viewWeeklyReport(logs);
                break;
            case 3:
                saveAndExit(logs);
                break;
            default:
                printf("Invalid choice! Please select between 1 and 3.\n");
        }
    }
    return 0;
}
void logStudyHours(struct StudyLog logs[]){
    int dayIndex;
    printf("\n--- Select Day to Log ---\n");
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        printf("%d. %s\n", i + 1, DAYS[i]);
    }
    printf("Select Day (1-7): ");  
    if (scanf("%d", &dayIndex) != 1 || dayIndex < 1 || dayIndex > 7) {
        printf("Invalid day selection!\n");
        while (getchar() != '\n');
        return;
    }
    dayIndex--;
    printf("\nLogging study hours for %s:\n", DAYS[dayIndex]);
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("  Enter hours for %-15s: ", logs[i].subject);
        scanf("%f", &logs[i].hours[dayIndex]);
    }
    printf("-> Hours logged successfully for %s!\n", DAYS[dayIndex]);
}
void viewWeeklyReport(const struct StudyLog logs[]) {  printf("\n=========================================================================\n");
    printf("                       WEEKLY PRODUCTIVITY REPORT                        \n");  printf("=========================================================================\n\n");
    printf("%-15s", "Subject");
    for (int d = 0; d < DAYS_IN_WEEK; d++) {
        printf("%-6s", DAYS[d]);
    }
    printf("%-10s %-10s\n", "Total", "Avg/Day");   printf("-------------------------------------------------------------------------\n");
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        float totalHours = 0.0;
        printf("%-15s", logs[i].subject);
        for (int d = 0; d < DAYS_IN_WEEK; d++) {
            printf("%-6.1f", logs[i].hours[d]);
            totalHours += logs[i].hours[d];
        }
        float averageHours = totalHours / DAYS_IN_WEEK;
        printf("%-10.1f %-10.2f\n", totalHours, averageHours);
    }    printf("\n=========================================================================\n");
    printf("                        VISUAL PROGRESS CHART                            \n");
    printf("              ( 1 Bullet '•' = 1 Hour Studied Truncated )                \n");   printf("=========================================================================\n");
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("\n[%s]\n", logs[i].subject);
        for (int d = 0; d < DAYS_IN_WEEK; d++){
            int fullHours = (int)logs[i].hours[d];    
            printf("  %-4s: ", DAYS[d]);
            if (fullHours == 0) {
                printf("-");
            } else {
                for (int h = 0; h < fullHours; h++) {
                    printf("• ");
                }
            }
            printf(" (%d hrs)\n", fullHours);
        }
    }  printf("=========================================================================\n");
}
void saveAndExit(const struct StudyLog logs[]){
    FILE *file = fopen("productivity_log.txt", "w");
    if (file == NULL){
        printf("Error creating productivity_log.txt file!\n");
        return;
    }
    for (int i = 0; i < NUM_SUBJECTS; i++){
        fprintf(file, "%s", logs[i].subject);
        for (int d = 0; d < DAYS_IN_WEEK; d++){
            fprintf(file, ",%.2f", logs[i].hours[d]);
        }fprintf(file, "\n");
    }
fclose(file);
    printf("\n[✓] Study records saved successfully to 'productivity_log.txt'.\n");
    printf("Exiting system. Happy learning!\n\n");
}
