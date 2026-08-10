#include<stdio.h>
void Employdetails(int id,char name[]){
    printf("\nEmploy ID: %d",id);
    printf("\nEmploy Name: %s",name);
}
int main(){
    Employdetails(1,"I");
    Employdetails(2,"ME");
    return 0;
}