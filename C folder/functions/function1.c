#include<stdio.h>
int calculatesalary(int salary){
    return salary+5000;
}
int main(){
    printf("\nTotal salary is %d",calculatesalary(15000));
    printf("\nTotal salary is %d",calculatesalary(20000));
    printf("\n Toal salary is %d",calculatesalary(23000));
    return 0;
}