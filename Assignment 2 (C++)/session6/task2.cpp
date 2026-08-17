#include <iostream>
#include <string>
class InstaStory {
protected:
    int storyViews;

public:
    InstaStory(int initialViews) : storyViews(initialViews) {}
    void displayViews() const {
        std::cout << "Story Views: " << storyViews << std::endl;
    }
};
class SponsoredStory : public InstaStory {
private:
    std::string sponsorName;
public:
    SponsoredStory(int views, const std::string& sponsor)
        : InstaStory(views), sponsorName(sponsor) {}
    void displaySponsoredAnalytics() const {
        std::cout << "=== Sponsored Story Analytics ===" << std::endl;
        std::cout << "Sponsor       : " << sponsorName << std::endl;
        std::cout << "Story Views   : " << storyViews << " (Accessed directly from parent)" << std::endl;
        std::cout << "----------------------------------" << std::endl;
    }
    void incrementViews(int newViews) {
        storyViews += newViews;
    }
};
int main() {
    SponsoredStory adStory(1250, "Nike");
    adStory.displaySponsoredAnalytics();
    adStory.incrementViews(350);
    std::cout << "After new engagement boost:" << std::endl;
    adStory.displaySponsoredAnalytics();
    return 0;
}