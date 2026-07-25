#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_EXPENSES 100

struct Expense{
    char category[30];
    float amount;
};
void addExpense(struct Expense expenses[], int *count);
void viewExpenses(const struct Expense expenses[], int count);
void saveAndExit(const struct Expense expenses[], int count);

int main(){
    struct Expense expenses[MAX_EXPENSES];
    int count = 0;
    int choice = 0;
    while (choice != 3){        
        printf("\n=====================================\n");
        printf("       PERSONAL EXPENSE LOGGER       \n");
        printf("=====================================\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("-------------------------------------\n");
        printf("Enter your choice (1-3): ");    
        if (scanf("%d", &choice) != 1){
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }switch (choice){
            case 1:
                addExpense(expenses, &count);
                break;
            case 2:
                viewExpenses(expenses, count);
                break;
            case 3:
                saveAndExit(expenses, count);
                break;
            default:
                printf("Invalid choice! Please select between 1 and 3.\n");
        }
    }
    return 0;
}
void addExpense(struct Expense expenses[], int *count){
    if (*count >= MAX_EXPENSES){
        printf("\n[!] Limit reached! You cannot add more than %d expenses.\n", MAX_EXPENSES);
        return;
    }
    printf("\n--- Add Expense ---\n");
    printf("Enter category (e.g., Food, Travel, Books): ");
    scanf(" %[^\n]s", expenses[*count].category);
    printf("Enter amount: ₹");
    scanf("%f", &expenses[*count].amount);
    (*count)++;
    printf("-> Expense added successfully!\n");
}
void viewExpenses(const struct Expense expenses[], int count){
    if (count == 0){
        printf("\n[!] No expenses logged yet.\n");
        return;
    }
    float total = 0.0;  
    printf("\n=====================================\n");
    printf("%-5s %-20s %-10s\n", "S.No", "Category", "Amount");   
    printf("=====================================\n");
    for (int i = 0; i < count; i++){
        printf("%-5d %-20s ₹%-10.2f\n", i + 1, expenses[i].category, expenses[i].amount);
        total += expenses[i].amount;
    }
    printf("-------------------------------------\n");
    printf("%-26s ₹%-10.2f\n", "TOTAL SPEND:", total);  printf("=====================================\n");
}
void saveAndExit(const struct Expense expenses[], int count){
    FILE *file = fopen("expenses.txt", "w");
    if (file == NULL){
        printf("\nError: Could not open expenses.txt for writing!\n");
        return;
    }
    for (int i = 0; i < count; i++){
        fprintf(file, "%s,%.2f\n", expenses[i].category, expenses[i].amount);
    }
    fclose(file);
    printf("\n[✓] %d record(s) saved to 'expenses.txt'. Exiting program. Goodbye!\n\n", count);
}