#include <iostream>
#include <fstream>
#include <string>
#include <vector>
int main() {
    std::ofstream outFile("my_fav_songs.txt");
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not create or open my_fav_songs.txt!" << std::endl;
        return 1;
    }
    std::vector<std::string> favoriteSongs = {
        "Blinding Lights",
        "Starboy",
        "As It Was",
        "Bohemian Rhapsody",
        "Hotel California"
    };
    std::cout << "Writing 5 favorite songs to 'my_fav_songs.txt'..." << std::endl;
    for (const auto& song : favoriteSongs) {
        outFile << song << "\n";
    }
    outFile.close();
    std::cout << "Successfully written and saved to 'my_fav_songs.txt'!" << std::endl;
    return 0;
}