#include <iostream>
#include <string>
class MusicPlayer {
public:
    virtual ~MusicPlayer() = default;
    virtual void play(const std::string& song) const {
        std::cout << "Playing: " << song << std::endl;
    }
};
class SpotifyPlayer : public MusicPlayer {
public:
    void play(const std::string& song) const override {
        std::cout << "Streaming on Spotify: " << song << std::endl;
    }
};
int main() {
    MusicPlayer* player = new SpotifyPlayer();
    player->play("Starboy - The Weeknd");
    delete player;
    return 0;
}