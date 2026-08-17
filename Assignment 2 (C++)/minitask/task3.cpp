#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
void displayContentList() {
    std::ifstream inFile("content_list.txt");
    if (!inFile.is_open()) {
        std::cout << "\n[!] No existing content records found in 'content_list.txt'." << std::endl;
        return;
    }
    std::cout << "\n=======================================" << std::endl;
    std::cout << "        SAVED CONTENT SUMMARY          " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::string line;
    int index = 1;
    bool isEmpty = true;
        while (std::getline(inFile, line)) {
        if (line.empty()) continue;
        std::stringstream ss(line);
        std::string title, platform, viewsStr, status;
        if (std::getline(ss, title, ',') &&
            std::getline(ss, platform, ',') &&
            std::getline(ss, viewsStr, ',') &&
            std::getline(ss, status, ',')) {
            isEmpty = false;
            std::cout << index << ". Title    : " << title << std::endl;
            std::cout << "   Platform : " << platform << std::endl;
            std::cout << "   Status   : " << status << std::endl;
            std::cout << "---------------------------------------" << std::endl;
            index++;
        }
    }
    if (isEmpty) {
        std::cout << "The content list is currently empty." << std::endl;
    }
    inFile.close();
}
int main() {
    displayContentList();
    return 0;
}