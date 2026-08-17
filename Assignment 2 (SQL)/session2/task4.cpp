#include <iostream>
#include <string>
#include <vector>
#include <ctime>

class Playlist {
public:
    std::string name;
    std::time_t createdOn;
    bool isPublic;
    std::vector<std::string> songs; // Array property to hold song titles
    Playlist(const std::string& playlistName, std::time_t date, bool publicStatus)
        : name(playlistName), createdOn(date), isPublic(publicStatus), songs() {}
    void addSong(const std::string& songTitle) {
        songs.push_back(songTitle);
    }
    void showSongs() const {
        std::cout << "\n=== Song List for '" << name << "' ===" << std::endl;
        if (songs.empty()) {
            std::cout << "No songs in playlist." << std::endl;
            return;
        }
        for (size_t i = 0; i < songs.size(); ++i) {
            std::cout << i + 1 << ". " << songs[i] << std::endl;
        }
        std::cout << "========================================\n" << std::endl;
    }
};
int main() {
    std::time_t now = std::time(nullptr);
    Playlist myPlaylist("Road Trip Hits", now, true);
    std::cout << "Adding songs to playlist..." << std::endl;
    myPlaylist.addSong("Hotel California");
    myPlaylist.addSong("Take It Easy");
    myPlaylist.addSong("Life in the Fast Lane");
    myPlaylist.showSongs();
    return 0;
}