#include<stdio.h>
int main()
{
    float input;
    float studyhours[7];
    float totalhours=0.0f;
    float averagehours=0.0f;
    int maxdayindex=0;
    printf("\n__WEEKLY STUDY HOURS TRAKER__");
    for (int i=0;i<7;i++){
    while (1)
    {
      printf("\nENTER STUDY HOURS FOR DAY %d:",i+1);
      scanf("%f", &input);
      if(input>=0.0f&&input<=24.0f){
        studyhours[i]=input;
        break;
      }printf("\ninvalid input");
    }
    totalhours+=studyhours[i];
    if(studyhours[i]>studyhours[maxdayindex]){
        maxdayindex= i ;
    }
}
    averagehours=totalhours/7.0f;
    printf("\n>WEEKLY ANAYLITICS SUMMARY<");
    printf("\nweekly total hours:%.2fhours",totalhours);
    printf("\nmost productive day:day %d(%.2fhours)",maxdayindex+1,studyhours[maxdayindex]);
    printf("\n__Study Hours Bar Chart");
    for (int i = 0; i <7; i++)
    {
        printf("\nDay %d:",i+1);
        int atriskcount=(int)studyhours[i];
        for (int j = 0; j <atriskcount; j++)
        {
            printf("*");
        }
        printf("\n(%.1f hrs)",studyhours[i]);
    }
    return 0;
    }