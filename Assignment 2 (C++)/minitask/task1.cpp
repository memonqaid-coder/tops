#include <iostream>
#include <string>
class Content {
private:
    std::string title;
    std::string platform;
    int views;
    std::string status;
public:
    Content() : title(""), platform(""), views(0), status("Draft") {}
    Content(const std::string& contentTitle, const std::string& targetPlatform, int viewCount,
        const std::string& contentStatus)
        : title(contentTitle), platform(targetPlatform), views(viewCount), status(contentStatus) {}
    void displayDetails() const {
        std::cout << "=======================================" << std::endl;
        std::cout << "Title    : " << title << std::endl;
        std::cout << "Platform : " << platform << std::endl;
        std::cout << "Views    : " << views << std::endl;
        std::cout << "Status   : " << status << std::endl;
        std::cout << "=======================================" << std::endl;
    }
    std::string getTitle() const { return title; }
    std::string getPlatform() const { return platform; }
    int getViews() const { return views; }
    std::string getStatus() const { return status; }
};
int main() {
    Content item1("C++ OOP Crash Course", "YouTube", 15200, "Published");
    std::cout << "=== Creator Dashboard Item Details ===\n" << std::endl;
    item1.displayDetails();
    return 0;
}