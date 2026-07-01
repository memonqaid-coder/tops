#include<stdio.h>
int main(){
    int E=10;
    int F=15;
    printf("\n__CONDITION STATMENT__");
    if(E<F){printf("\ncondition successfull");}
    int G=33;
    int H=44;
    if(G<H){printf("\nFecthing Error");}
    else {printf("\nRight Ans");}
    int choice=3;
    printf("\n__Switch__");
    switch (choice)
    {
    case 1:
    printf("\ndeposit");
        break;
    case 2:
    printf("\nwithdraw");
    break;
    case 3:
    printf("\nBalance Check");
    break;
    default:
    printf("\nExit");
    }
    printf("\n__For Loop__"); 
    {for (int i=1; i<=10;i++)
    {printf("\nRoll No.%d is Present",i);
    }
    int pin;
    printf("\n__while Loop__");
    while(pin!=22334){
        printf("\nplease enter your pin");
        scanf("%d",&pin);
    }
    printf("\nLogin successfull");

    for (int i=1; i<=10;i++)
    {printf("\nRoll No.%d is Present",i);
    }
    int pin;
    printf("\n__While Loop__");
    while (pin!=22334){
        printf("\nEnter your pin");
        scanf("%d",&pin);
    }
    printf("\nLogin Successful");
    int select;
    while(3){
        printf("\nEnter your choice");
        scanf("%d",&select);
    {
    select,1;
    printf("\ndeposit");
        break;
    select,2;
    printf("\nwithdraw");
    break;
    select,3;
    printf("\nBalance Check");

    }
    printf("\nThank you");
    
    
    }
    printf("\n__Nested Loop__");
    for (int i=1; i<=3;i++){
        for (int k=1; k<=6;k++){
            printf("\nRAW no is %d and column is %d",i,k);
        }
        
    }
    printf("\n__Break&Continue__");
    for (int A = 1; A <=10; A++){
        if (A==4){
            printf("\nStudent %d is Absent",A);
            continue;
        }
        printf("\nStudent %d is Present",A);      
    }
    return 0;
    }