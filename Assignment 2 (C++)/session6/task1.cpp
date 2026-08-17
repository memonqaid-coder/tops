#include <iostream>
#include <string>
class Song {
private:
    std::string title;
    std::string artist;
public:
    Song(const std::string& songTitle, const std::string& artistName)
        : title(songTitle), artist(artistName) {}

    
    std::string getTitle() const {
        return title;
    }
    void setTitle(const std::string& newTitle) {
        title = newTitle;
    }
    std::string getArtist() const {
        return artist;
    }
    void setArtist(const std::string& newArtist) {
        artist = newArtist;
    }
    void displayInfo() const {
        std::cout << "Song: " << title << " | Artist: " << artist << std::endl;
    }
};
int main() {
    Song mySong("Blinding Light", "The Weeknd");

    std::cout << "--- Initial Details ---" << std::endl;
    mySong.displayInfo();
    std::cout << "\nUpdating song title..." << std::endl;
    mySong.setTitle("Blinding Lights");
    std::cout << "\n--- Updated Details ---" << std::endl;
    std::cout << "Updated Title via Getter: " << mySong.getTitle() << std::endl;
    mySong.displayInfo();
    return 0;
}