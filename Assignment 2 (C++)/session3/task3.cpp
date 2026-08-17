#include <iostream>
#include <string>
class Movie {
private:
    std::string title;
    std::string director;
    double rating;
public:
    Movie(const std::string& movieTitle, const std::string& directorName, double movieRating)
        : title(movieTitle), director(directorName), rating(movieRating) {
        std::cout << "[Parameterized Constructor Called] Created: " << title << std::endl;
    }
    Movie(const Movie& source)
        : title(source.title), director(source.director), rating(source.rating) {
        std::cout << "[Copy Constructor Called] Duplicated: " << title << std::endl;
    }
    void displayDetails(const std::string& label) const {
        std::cout << "--- " << label << " ---" << std::endl;
        std::cout << "Title    : " << title << std::endl;
        std::cout << "Director : " << director << std::endl;
        std::cout << "Rating   : " << rating << " / 10" << std::endl;
        std::cout << "-----------------------" << std::endl;
    }
};
int main() {
    Movie originalMovie("Inception", "Christopher Nolan", 8.8);
    std::cout << std::endl;
    Movie copiedMovie = originalMovie; // Alternatively: Movie copiedMovie(originalMovie);
    std::cout << std::endl;
    originalMovie.displayDetails("Original Movie");
    copiedMovie.displayDetails("Copied Movie");
    return 0;
}