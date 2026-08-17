/*Q:Write a code snippet that demonstrates the difference between 
    pre-increment (++count) and post-increment (count++) by logging 
    the values before and after using both on a followerCount variable.
  A:*/
#include<stdio.h>
int main(){
int followercount1=500;
printf("\nInitial Value=%d",followercount1);
printf("\nValue during operation=%d",followercount1++);
printf("\nValue after operation=%d",followercount1);
int followercount2=650;
printf("\nInitial value=%d",followercount2);
printf("\nValue During Operation=%d",++followercount2);
printf("\nVALUE AFTER OPERATION=%d",followercount2);
return 0;
}