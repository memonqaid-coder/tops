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
class YouTuber : public SocialMediaUser {
protected:
    std::string channelName;
public:
    YouTuber(const std::string& uname, int followerCount, const std::string& cName)
        : SocialMediaUser(uname, followerCount), channelName(cName) {}
    void uploadVideo(const std::string& title) const {
        std::cout << "Video '" << title << "' uploaded to " << channelName << std::endl;
    }
};
int main() {
    YouTuber creator("tech_guru", 15400, "Tech Guru Official");
    creator.displayProfile();

    
    creator.uploadVideo("C++ Inheritance Explained in 10 Minutes");
    return 0;
}