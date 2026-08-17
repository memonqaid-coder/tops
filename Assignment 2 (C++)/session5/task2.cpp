#include <iostream>
#include <string>
class SocialMediaUploader {
public:
    virtual ~SocialMediaUploader() = default;
    virtual void uploadContent(const std::string& contentTitle) const {
        std::cout << "Uploading content: '" << contentTitle << "' to generic social media platform." << std::endl;
    }
};
class InstagramUploader : public SocialMediaUploader {
public:
    void uploadContent(const std::string& contentTitle) const override {
        std::cout << "[Instagram Upload] Optimizing video ratio to 9:16 vertical reels..." << std::endl;
        std::cout << "-> Successfully posted Reel: '" << contentTitle << "' with hashtags & music track!" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
    }
};
class YouTubeUploader : public SocialMediaUploader {
public:
    void uploadContent(const std::string& contentTitle) const override {
        std::cout << "[YouTube Upload] Processing 4K 16:9 video, generating auto-captions & thumbnail..." << std::endl;
        std::cout << "-> Successfully published Video: '" << contentTitle << "' to YouTube Channel!" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
    }
};
int main() {
    SocialMediaUploader* insta = new InstagramUploader();
    SocialMediaUploader* yt = new YouTubeUploader();
    std::cout << "=== Social Media Uploader Dynamic Dispatch Demo ===\n" << std::endl;
    insta->uploadContent("Aesthetic Morning Routine");
    yt->uploadContent("C++ Polymorphism & Virtual Functions Tutorial");
    delete insta;
    delete yt;
    return 0;
}