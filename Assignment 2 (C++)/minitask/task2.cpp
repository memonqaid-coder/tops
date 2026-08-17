#include <iostream>
#include <fstream>
#include <string>
class Content {
private:
    std::string title;
    std::string platform;
    int views;
    std::string status;
public:
    Content(const std::string& contentTitle, const std::string& targetPlatform, int viewCount, 
        const std::string& contentStatus)
        : title(contentTitle), platform(targetPlatform), views(viewCount), status(contentStatus) {}
    void saveToFile(std::ofstream& outFile) const {
        outFile << title << "," << platform << "," << views << "," << status << "\n";
    }
    void displayDetails() const {
        std::cout << "Title    : " << title << "\n"
                  << "Platform : " << platform << "\n"
                  << "Views    : " << views << "\n"
                  << "Status   : " << status << std::endl;
    }
};
void addContentItem() {
    std::string title, platform, status;
    int views;
    std::cout << "\n--- Add New Content Idea ---" << std::endl;
    std::cout << "Enter Content Title: ";
    std::getline(std::cin >> std::ws, title);
    std::cout << "Enter Platform (YouTube/Instagram/TikTok/etc.): ";
    std::getline(std::cin >> std::ws, platform);
    std::cout << "Enter View Count: ";
    std::cin >> views;
    std::cout << "Enter Status (Draft/Scheduled/Published): ";
    std::getline(std::cin >> std::ws, status);
    Content newContent(title, platform, views, status);
    
    std::ofstream outFile("content_list.txt", std::ios::app);
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open content_list.txt for writing!" << std::endl;
        return;
    }
    newContent.saveToFile(outFile);
    outFile.close();
    std::cout << "\n-> Content successfully saved to 'content_list.txt'!" << std::endl;
}
int main() {
    int choice;
    do {
        std::cout << "\n=======================================" << std::endl;
        std::cout << "       CREATOR DASHBOARD LITE          " << std::endl;
        std::cout << "=======================================" << std::endl;
        std::cout << "1. Add New Content Idea" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cout << "Enter your choice (1-2): ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                addContentItem();
                break;
            case 2:
                std::cout << "Exiting Creator Dashboard. Happy creating!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
        }
    } while (choice != 2);
    return 0;
}