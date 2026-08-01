#include<stdio.h>
#include<string.h>
int main(){
    char task_list[tasks=5][50];
    tasks=5;
    int user_choice;
    printf("\n Select 1 option Given Below");
    printf("\n1-> View Your Task List");
    printf("\n2-> Add New Task To List");
    printf("\n3-> EXIT");
    scanf("%d",&user_choice);
    while (getchar()!='n');
    if (user_choice==1){
        printf("\n YOUR CHOICE:");
        for (int i=0;i<5;i++)
        {
            printf("%d.%s\n",i+1,task_list[i]);
        }
    }else if (user_choice==2){
        if (tasks<5)
        {
            printf("\n Enter Your New Tasks: ");
            fgets(task_list[tasks],50,stdin);
            task_list[tasks][strcspn(task_list[tasks],"\n")];
            printf("%s has been successfully added in your list\n",task_list[tasks]);
            tasks++;
        }else{
            printf
        }
        
    }
}