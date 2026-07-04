/*Q:Write a function isEligibleForOffer that takes a user's age and 
    total order value, and returns true if the user is 18 or older AND 
    the order value is above 500, otherwise false.<br><br><em><strong>
    Hint:</strong> Use relational and logical operators together.</em>
  A:*/
#include<stdio.h>
#include<stdbool.h>
bool isEligibleForOffer(int age,float totalordervalue){
    if(age>=18 & totalordervalue>500.00f){
        return true;
    }else{
        return false;
    }
}
int main (){
    int userage=17;
    float ordervalue=650.50f;
    printf("\nUser Age:%d",userage);
    printf("\nOrder Value:Rs.%.2f",ordervalue);
    if(isEligibleForOffer(userage,ordervalue)){
        printf("\nstatus:Eligible!Coupon Code Applied");
    }else{
        printf("\nStatus:Not Eligible for Coupon Code");
    }
    return 0;
}