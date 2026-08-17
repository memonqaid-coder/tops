#include <iostream>
#include <fstream>
#include <string>
#include <vector>
class Playlist {
private:
    std::string name;
    std::vector<std::string> songs;
public:
    Playlist(const std::string& playlistName) : name(playlistName) {
        std::cout << "[Playlist Created] Loaded '" << name << "' into active memory." << std::endl;
    }
    void addSong(const std::string& songTitle) {
        songs.push_back(songTitle);
        std::cout << "  + Added song: " << songTitle << std::endl;
    }
    ~Playlist() {
        std::cout << "\n[Destructor Called] Session closing... Auto-saving '" << name << "' to file." << std::endl;  
        std::ofstream fout("autosave.txt");
        if (fout.is_open()) {
            fout << "=== Spotify Auto-Save ===" << std::endl;
            fout << "Playlist Name: " << name << std::endl;
            fout << "Total Songs  : " << songs.size() << std::endl;
            fout << "--- Songs ---" << std::endl;
            for (size_t i = 0; i < songs.size(); ++i) {
                fout << i + 1 << ". " << songs[i] << std::endl;
            }
            fout.close();
            std::cout << "-> Successfully auto-saved to 'autosave.txt'!" << std::endl;
        } else {
            std::cerr << "-> Error opening 'autosave.txt' for auto-saving!" << std::endl;
        }
    }
};
int main() {
    std::cout << "=== Spotify Auto-Save Simulation ===\n" << std::endl;
    {
        Playlist myPlaylist("Late Night Drive");  
        myPlaylist.addSong("Midnight City");
        myPlaylist.addSong("Starboy");
        myPlaylist.addSong("Blinding Lights");
        std::cout << "\nClosing app session (exiting block scope)..." << std::endl;
    }
    return 0;
}