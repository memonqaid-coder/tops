#include <iostream>
#include <fstream>
#include <string>
int main() {
    std::ifstream inFile("insta_followers.txt");
    if (!inFile.is_open()) {
        std::cerr << "Error: Could not open insta_followers.txt!" << std::endl;
        return 1;
    }
    std::string line;
    int followerCount = 0;
    while (std::getline(inFile, line)) {
        if (!line.empty()) {
            followerCount++;
        }
    }
    inFile.close();
    std::cout << "=======================================" << std::endl;
    std::cout << "Total Instagram Followers Count: " << followerCount << std::endl;
    std::cout << "=======================================" << std::endl;
    return 0;
}