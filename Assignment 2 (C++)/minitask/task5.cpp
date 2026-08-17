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
void displayList(const std::vector<ContentItem>& items) {
    if (items.empty()) {
        std::cout << "\n[!] Content list is empty." << std::endl;
        return;
    }
    std::cout << "\n=======================================" << std::endl;
    std::cout << "        CURRENT CONTENT LIST           " << std::endl;
    std::cout << "=======================================" << std::endl;
    for (size_t i = 0; i < items.size(); ++i) {
        std::cout << (i + 1) << ". " << items[i].title 
                  << " [" << items[i].platform << "] - Status: " << items[i].status << std::endl;
    }
    std::cout << "=======================================" << std::endl;
}
void deleteContentItem() {
    std::vector<ContentItem> items = loadAllContent();
    if (items.empty()) {
        std::cout << "\n[!] No items available to delete." << std::endl;
        return;
    }
    displayList(items);
    int choice;
    std::cout << "\nEnter the item number to delete (1-" << items.size() << "): ";
    std::cin >> choice;
    if (choice < 1 || choice > static_cast<int>(items.size())) {
        std::cout << "-> Invalid selection! Operation canceled." << std::endl;
        return;
    }
    std::string deletedTitle = items[choice - 1].title;
    items.erase(items.begin() + (choice - 1));
    saveAllContent(items);
    std::cout << "\n-> Success: Deleted '" << deletedTitle << "' from content list." << std::endl;
    std::cout << "\n=== CONFIRMATION: UPDATED LIST ===" << std::endl;
    displayList(items);
}
int main() {
    deleteContentItem();
    return 0;
}