#include<stdio.h>
#include<string.h>
struct studentprofile{
    char name[50];
    int rollnumber;
    long uniqueid;
};
int main(){
    struct studentprofile s1;
    strcpy(s1.name,"qaid");
    s1.rollnumber=17;
    s1.uniqueid=331104853365;
    printf("\nyour name:%s",s1.name);
    printf("\nroll number:%d",s1.rollnumber);
    printf("\n Uni ID:%ld",s1.uniqueid);
    return 0;

}