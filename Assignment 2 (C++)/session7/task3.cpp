#include <iostream>
#include <fstream>
#include <string>
int main() {
    std::string newSong;
    std::cout << "Enter the name of a new song to append: ";
    std::getline(std::cin, newSong);
    std::ofstream outFile("my_fav_songs.txt", std::ios::app);
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open my_fav_songs.txt in append mode!" << std::endl;
        return 1;
    }
    outFile << newSong << "\n";
    outFile.close();
    std::cout << "Successfully appended '" << newSong << "' to 'my_fav_songs.txt'!" << std::endl;
    std::cout << "\n=== Updated 'my_fav_songs.txt' Contents ===" << std::endl;
    std::ifstream inFile("my_fav_songs.txt");
    std::string line;
    int count = 1;
    while (std::getline(inFile, line)) {
        std::cout << count++ << ". " << line << std::endl;
    }
    inFile.close();
    return 0;
}