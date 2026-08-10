#include<stdio.h>
#include<stdlib.h>
int main(){
    int yournumber;
    printf("\nYour Number");
    scanf("%d",&yournumber);
    int *name=(int*)malloc(yournumber*sizeof(int));
    for (int i=0;i<=yournumber;i++){
        scanf("%d",name[i]);
    }
    for (int i=0;i<=yournumber;i++){
        printf("\n%d",name[i]);
    }
    return 0;

}