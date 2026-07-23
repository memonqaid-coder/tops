#include <stdio.h>

struct Bio{
    char description[150];
    int age;
};
struct InstaProfile{
    char username[50];
    int followers;
    struct Bio userBio;
};
int main(){
    struct InstaProfile myProfile={
        .username="coder_QAID",
        .followers=1420,
        .userBio={
            .description = "C Programmer | Tech Enthusiast | Building cool stuff ",
            .age = 21
        }
    };
    printf(" INSTAGRAM PROFILE \n");
    printf("<<<<<<<<<<<<<<<<<>>>>>>>>>>>\n");
    printf("Username : @%s\n", myProfile.username);
    printf("Followers : %d\n", myProfile.followers);
    printf("Age : %d\n", myProfile.userBio.age);
    printf("Bio : %s\n", myProfile.userBio.description);
    printf("------------------------------------------\n");
    return 0;
}