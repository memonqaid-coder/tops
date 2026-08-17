#include <iostream>
#include <string>
#include <ctime>

class Playlist {
public:
    std::string name;
    std::time_t createdOn;
    date/time
    bool isPublic;
    Playlist(const std::string& playlistName, std::time_t date, bool publicStatus)
        : name(playlistName), createdOn(date), isPublic(publicStatus) {}
    void display() const {
        char dateBuffer[26];
        ctime_s(dateBuffer, sizeof(dateBuffer), &createdOn);

        std::cout << "=== Playlist Details ===" << std::endl;
        std::cout << "Name       : " << name << std::endl;
        std::cout << "Created On : " << dateBuffer;
        std::cout << "Visibility : " << (isPublic ? "Public" : "Private") << std::endl;
    }
};
int main() {
    std::time_t now = std::time(nullptr);
    Playlist myPlaylist("Chill Acoustic Vibes", now, true);
    myPlaylist.display();

    return 0;
}