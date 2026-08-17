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
class InstagramInfluencer : public SocialMediaUser {
public:
    InstagramInfluencer(const std::string& uname, int followerCount)
        : SocialMediaUser(uname, followerCount) {}
    void postStory(const std::string& storyTitle) const {
        std::cout << username << " posted a new story: " << storyTitle << std::endl;
    }
};
int main() {
    InstagramInfluencer influencer("style_icon", 125000);
    influencer.displayProfile();
    influencer.postStory("Behind the scenes at Paris Fashion Week!");
    return 0;
}