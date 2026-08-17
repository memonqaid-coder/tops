#include <iostream>
#include <string>
#include <ctime>
class Playlist {
public:
    std::string name;
    std::time_t createdOn;
    bool isPublic;
    Playlist(const std::string& playlistName, std::time_t date, bool publicStatus)
        : name(playlistName), createdOn(date), isPublic(publicStatus) {}
    void togglePublic() {
        isPublic = !isPublic;
    }
    void display() const {
        char dateBuffer[26];
        ctime_s(dateBuffer, sizeof(dateBuffer), &createdOn);
        std::cout << "Name       : " << name << std::endl;
        std::cout << "Created On : " << dateBuffer;
        std::cout << "Visibility : " << (isPublic ? "Public" : "Private") << std::endl;
    }
};
int main() {
    std::time_t now = std::time(nullptr);
    Playlist myPlaylist("Chill Acoustic Vibes", now, true);
    std::cout << "=== Initial State ===" << std::endl;
    myPlaylist.display();
    std::cout << "\n--> Toggling public status (1st time)..." << std::endl;
    myPlaylist.togglePublic();
    std::cout << "Current Visibility: " << (myPlaylist.isPublic ? "Public" : "Private") << std::endl;
    std::cout << "\n--> Toggling public status (2nd time)..." << std::endl;
    myPlaylist.togglePublic();
    std::cout << "Current Visibility: " << (myPlaylist.isPublic ? "Public" : "Private") << std::endl;
    return 0;
}