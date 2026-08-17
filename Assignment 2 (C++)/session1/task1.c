#include<stdio.h>
#include<string.h>
int main(){
    char task_list[5][50];
    int user_choice;
    int tasks=0;
    while (1)
    printf("\n Select 1 option Given Below");
    printf("\n1-> View Your Task List");
    printf("\n2-> Add New Task To List");
    printf("\n3-> EXIT\n\n");
    scanf("%d",&user_choice);
    while (getchar()!='n');
    if (user_choice==1){
        printf("\n YOUR CHOICE:");
        for (int i=0;i<5;i++)
        {
            printf("%d.%s\n",i+1,task_list[i]);
        }
        if (tasks<5){
            printf("\nyour task is empty");
        }
    }else if (user_choice==2){
        if (tasks<5)
        {
            printf("\n Enter Your New Tasks: ");
            fgets(task_list[tasks],50,stdin);
            task_list[tasks]
            [strcspn(task_list[tasks],"\n")]='0';
            printf("%s has been successfully added in your list\n",task_list[tasks]);
            tasks++;
        }else{
            printf("\n YOUR LIST IS FULL !!!");
        }
    }
    else if(user_choice==3){
        printf("\n Exiting the Task List");
    }else{
        printf("\nInvalid Choice");
    }
    return 0;
}