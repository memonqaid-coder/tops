#include <iostream>
#include <string>
class SocialMediaUser {
protected:
    std::string username;
    int followers;
public:
    SocialMediaUser(const std::string& uname, int followerCount)
        : username(uname), followers(followerCount) {}
    void displayProfile() const {
        std::cout << "=== User Profile ===" << std::endl;
        std::cout << "Username  : @" << username << std::endl;
        std::cout << "Followers : " << followers << std::endl;
        std::cout << "--------------------" << std::endl;
    }
};
int main() {
    SocialMediaUser user1("tech_guru", 15400);
    user1.displayProfile();
    return 0;
}