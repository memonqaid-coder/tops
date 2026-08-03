#include<stdio.h>
#include<string.h>
char tasklist[5][50];
int task_status[5];
int tasks=0;
void markTaskdone(int index){
    if(index>=0&&index<tasks)
    {
        task_status[index]=1;
        printf("\nTask Done");
    }else{
        printf("\nInvalid Task");
    }
}
void printTasklist(){
    printf("\nYour Task List: ");
    if(tasks==0){
        printf("\nYour Task List Is Empty!!!\n");
        return;
    }
    for (int i=0;i<tasks;i++)
    {
        printf("%d.%s",i+1,tasklist[i]);
        if(task_status[i]==1){
            printf("\n -DONE");
        }
    }
    printf("\n");
}
    int main(){
        int user_choice;
        int task_index;
        while (1)
        {
            printf("\n Select 1 option Given Below");
            printf("\n1-> View Your Task List");
            printf("\n2-> Add New Task To List");
            printf("\n3-> Mark Task As Done");
            printf("\n4-> EXIT\n\n");
            scanf("%d",&user_choice);
            //while (getchar()!='n');
            if (user_choice==1){
                printTasklist();
            }else if (user_choice==2){
        if (tasks<5)
        {
            printf("\n Enter Your New Tasks: ");
            scanf("%s",&tasks);
            fgets(tasklist[tasks],50,stdin);
            tasklist[tasks]
            [strcspn(tasklist[tasks],"\n")]=0;
            printf("%s has been successfully added in your list\n",tasklist[tasks]);
            tasks++;
        }else{
            printf("\n YOUR LIST IS FULL !!!");
        }
    }
    else if(user_choice==3){
        if (tasks==0){
            printf("\n No Task To Done");
        }else{
            printTasklist();
            printf("\nEnter Task Number To Mark As Done:");
            scanf("%d",&task_index);
            markTaskdone(task_index-1);
            printTasklist();
        }
    }else if (user_choice==4)
    {
        printf("\nExting The Tasklist");
        break;
    }else{
        printf("\nInvalid Choice");
    }
}
    return 0;
}