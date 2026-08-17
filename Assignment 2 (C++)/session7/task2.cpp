#include <iostream>
#include <fstream>
#include <string>
int main() {
    std::ifstream inFile("my_fav_songs.txt");
    if (!inFile.is_open()) {
        std::cerr << "Error: Could not open my_fav_songs.txt. Make sure the file exists!" << std::endl;
        return 1;
    }
    std::cout << "=== Songs from 'my_fav_songs.txt' ===" << std::endl;
    std::string song;
    int songNumber = 1;
    while (std::getline(inFile, song)) {
        std::cout << songNumber++ << ". " << song << std::endl;
    }
    inFile.close();
    std::cout << "------------------------------------" << std::endl;
    return 0;
}