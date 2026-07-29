#include<stdio.h>
int main(){
    char mealchoice;
    printf("\nWelcome to Zomato Food Suggestion!");
    printf("\nWhat meal time is it?\nEnter the first letter: \n[B]reakfast\n[L]unch\n[D]inner\n[S]nack\n Your Choice:");
    scanf("%c",&mealchoice);
    printf("\n__Recommendations__");
    switch (mealchoice)
    {
    case 'b':
        printf("\nBreakfast Suggestion:How about a HOT PLATE OF IDLI-SAMBAR or POHA?");
        break;
    case 'l':
        printf("\nLunch sugggestion:A hearthy NORTH INDIAN VEG THALI or CHICKEN BIRYANI sounds perfect!");
        break;
    case 'd':
        printf("\nDinner suggestion: Treat yourself to a BUTTER PANEER MASALA with NAAN or a GOURMENT PIZZA!");
        break;
    case 's':
        printf("\n Snack suggestion: Perfect time for a HOT cup of FILTER COFFEE with some CRISPY SAMOSAS!");
        break;
    default:
    printf("\nHEALTHY choice:Input unrecognized.TRY SOME FRUITS!");
        break;
    }
    return 0;
}