/*Q:Given three variables: likes, comments, and shares (all numbers), 
    write code to check if a post is 'trending' on Instagram (at least 
    1000 likes OR more than 200 comments AND at least 50 shares). 
    Print the result.
  A:*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    int likes=998;
    int comments=250;
    int shares=55;
    bool isTrending=(likes>=1000)||(comments>=200&shares>=50);
    printf("\nlikes:%d",likes);
    printf("\ncomments:%d",comments);
    printf("\nshares:%d",shares);
    if (isTrending){
        printf("\nPost Status:TRENDING!");
    }else{
        printf("\nPost Status:NORMAL!");
    }
    return 0;
}