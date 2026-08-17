#include <iostream>
#include <string>
using namespace std;
class Playlist {
public:
    string name;
    Playlist() : name("My Favourites") {
        cout << "Welcome to your Playlist! Created default playlist: '"
                  << name << "'" << std::endl;
    }
    void display() const {
        cout << "Playlist Name: " << name <<endl;
    }
};
int main() {
    Playlist myPlaylist;
    myPlaylist.display();
    return 0;
}