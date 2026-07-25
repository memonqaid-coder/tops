#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    int rollno;
    float marks;
    char grade;
};
void assignGrade(struct Student *s){
    if (s->marks >= 90.0){
        s->grade = 'A';
    } else if (s->marks >= 75.0){
        s->grade = 'B';
    } else if (s->marks >= 50.0){
        s->grade = 'C';
    } else{
        s->grade = 'E';
    }
}
void printTopper(struct Student students[], int n){
    int topIndex = 0;
    for (int i = 1; i < n; i++){
        if (students[i].marks > students[topIndex].marks){
            topIndex = i;
        }
    }  
    printf("\n<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>");
    printf("\n                  TOP PERFORMER                    ");   
    printf("\n<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>");
    printf("Name: %s\n", students[topIndex].name);
    printf("Marks: %.2f\n", students[topIndex].marks);
    printf("Grade: %c\n", students[topIndex].grade);  
    printf("''''''''''''''''''''''''''''''''''''''''''''''''\n");
}
int main(){
    struct Student students[3];
    int n = 3;
    printf("!!! Input Student Records !!!\n");
    for (int i = 0; i < n; i++){
        printf("--- Student %d ---\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
        assignGrade(&students[i]);
        printf("\n");
    }   printf("\n===================================================");
    printf("%-10s %-20s %-10s %-6s\n", "Roll No", "Name", "Marks", "Grade");   
    printf("\n===================================================");
    for (int i = 0; i < n; i++){
        printf("%-10d %-20s %-10.2f %-6c\n",
               students[i].rollno,
               students[i].name,
               students[i].marks,
               students[i].grade);
    }   printf("===================================================\n");
    printTopper(students, n);
    return 0;
}