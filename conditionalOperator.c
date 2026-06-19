#include<stdio.h>
/*<,>,<=,>=,==,!=*/
int main(){
    int age=45;
    if (age>=42){
        printf("Not eligible for rafting");
    }
    int member=3;
    if (member<3){
        printf("Not allowed");
    }
    if (member>3){
        printf("Arrange other members_Required");
    }
    return 0;
}