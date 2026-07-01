#include <stdio.h>

int main() {
    float percentage;
    printf("enter your percentage:");
    scanf("%f",&percentage);
     if (percentage<0.1f||percentage>100.0f)
    {
      printf("\nERROR:PUT EXACT NUMBERS");
    }
      return 1; 
    
    if (percentage>=90.00f)
    {
     printf("\nGRADE:A\nEXCELLENT");
    }
    else if (percentage>=75.00f)
    {
     printf("\nGRADE:B\nGOOD");
    }
    else if(percentage>=60.00f)
    {
        printf("\nGRADE:C\nAVERAGE");
    }
    else if (percentage>=45.00f)
    {
        printf("\nGRADE:D\nNEED IMPROVEMENT");
    }
    else if(percentage<=45.00f)
    {
        printf("\nGRADE:E\nFAIL");
    }
    return 0;
}