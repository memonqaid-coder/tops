#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

struct ContentItem {
    std::string title;
    std::string platform;
    int views;
    std::string status;
};
std::vector<ContentItem> loadAllContent() {
    std::vector<ContentItem> items;
    std::ifstream inFile("content_list.txt");
    if (!inFile.is_open()) return items;
    std::string line;
    while (std::getline(inFile, line)) {
        if (line.empty()) continue;
        std::stringstream ss(line);
        ContentItem item;
        std::string viewsStr;
        if (std::getline(ss, item.title, ',') &&
            std::getline(ss, item.platform, ',') &&
            std::getline(ss, viewsStr, ',') &&
            std::getline(ss, item.status, ',')) {           
            item.views = std::stoi(viewsStr);
            items.push_back(item);
        }
    }
    inFile.close();
    return items;
}
void saveAllContent(const std::vector<ContentItem>& items) {
    std::ofstream outFile("content_list.txt", std::ios::trunc);
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not update content_list.txt!" << std::endl;
        return;
    }
    for (const auto& item : items) {
        outFile << item.title << "," << item.platform << "," 
                << item.views << "," << item.status << "\n";
    }
    outFile.close();
}
void updateContentStatus() {
    std::vector<ContentItem> items = loadAllContent();
    if (items.empty()) {
        std::cout << "\n[!] No content items available to update." << std::endl;
        return;
    }
    std::cout << "\n=== SELECT CONTENT TO UPDATE STATUS ===" << std::endl;
    for (size_t i = 0; i < items.size(); ++i) {
        std::cout << (i + 1) << ". " << items[i].title 
                  << " [" << items[i].platform << "] - Current Status: " << items[i].status << std::endl;
    }
    int choice;
    std::cout << "\nEnter the item number to update (1-" << items.size() << "): ";
    std::cin >> choice;
    if (choice < 1 || choice > static_cast<int>(items.size())) {
        std::cout << "-> Invalid selection! Operation canceled." << std::endl;
        return;
    }
    std::cout << "Enter new status (e.g., Draft / Scheduled / Published): ";
    std::string newStatus;
    std::getline(std::cin >> std::ws, newStatus);
    items[choice - 1].status = newStatus;
    saveAllContent(items);
    std::cout << "\n-> Success: Status updated to '" << newStatus << "' and saved back to file!" << std::endl;
}
int main() {
    updateContentStatus();
    return 0;
}