#include<stdio.h>
void printnumber(int i){
    if(i>5){
        return;
    }
    printf("\n%d",i);
    printnumber(i+1);
}
int main(){
    printnumber(1);
    return 0;
}