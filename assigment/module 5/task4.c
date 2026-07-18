#include<stdio.h>
int main(){
    int age;
    printf("\nEnter Your Age:");
    scanf("%d",&age);
    if (age>=18&& age<=20){
      printf("\n 'You are Eligible for Driving License'");
    }else if (age>=21&& age<=24){
        printf("\nYou are Eligible for Credit Card");
    }else if (age>=25){
        printf("\nYou are Eligible for Car Rental");
    }else{
        printf("\nYou Should be Above 18");} 
    return 0;
}