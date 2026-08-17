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
class Podcaster : public SocialMediaUser {
protected:
    std::string podcastName;
public:
    Podcaster(const std::string& uname, int followerCount, const std::string& pName)
        : SocialMediaUser(uname, followerCount), podcastName(pName) {}
    void publishEpisode(const std::string& episodeTitle) const {
        std::cout << "Episode '" << episodeTitle << "' published on " << podcastName << std::endl;
    }
};
int main() {
    Podcaster host("audio_engineer", 8500, "The Tech & Code Show");
    host.displayProfile();
    host.publishEpisode("Deep Dive into C++ Object-Oriented Programming");
    return 0;
}