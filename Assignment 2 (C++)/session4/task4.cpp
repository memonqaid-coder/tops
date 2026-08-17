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
class GamingYouTuber : public YouTuber {
public:
    GamingYouTuber(const std::string& uname, int followerCount, const std::string& cName)
        : YouTuber(uname, followerCount, cName) {}
    void streamGame(const std::string& gameName) const {
        std::cout << username << " is now streaming " << gameName << " on " << channelName << std::endl;
    }
};
int main() {
    GamingYouTuber gamer("ninja_coder", 500000, "Pixel Arcade");
    gamer.displayProfile();
    gamer.uploadVideo("Top 10 C++ Game Engine Tricks");
    gamer.streamGame("Cyberpunk 2077");
    return 0;
}