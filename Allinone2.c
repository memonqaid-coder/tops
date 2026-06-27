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
    printf("\n__Loop__");
    {for (int i=1; i<=10;i++)
    {printf("\nRoll No.%d is Present",i);
    }
    }
    return 0;
}