#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
struct Product {
    std::string name;
    double price;
};
int main() {
    std::ofstream outFile("wishlist.txt");
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not create or open wishlist.txt!" << std::endl;
        return 1;
    }
    std::cout << "=== Flipkart Wishlist Tracker Setup ===" << std::endl;
    std::cout << "Please enter 3 products to add to your wishlist:\n" << std::endl;
    for (int i = 1; i <= 3; ++i) {
        Product item;
        std::cout << "Product #" << i << " Name : ";
        std::getline(std::cin >> std::ws, item.name);

        std::cout << "Product #" << i << " Price (₹): ";
        std::cin >> item.price;
        std::cout << "---------------------------------------" << std::endl;
        outFile << item.name << "," << item.price << "\n";
    }
    outFile.close();
    std::cout << "\nWishlist data successfully saved to 'wishlist.txt'!\n" << std::endl;
    std::ifstream inFile("wishlist.txt");

    if (!inFile.is_open()) {
        std::cerr << "Error: Could not open wishlist.txt for reading!" << std::endl;
        return 1;
    }
    std::cout << "=======================================" << std::endl;
    std::cout << "       YOUR FLIPKART WISHLIST          " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::string line;
    int itemNum = 1;
    while (std::getline(inFile, line)) {
        size_t commaPos = line.find(',');
        if (commaPos != std::string::npos) {
            std::string name = line.substr(0, commaPos);
            double price = std::stod(line.substr(commaPos + 1));
            std::cout << itemNum++ << ". " << name 
                      << " - ₹" << std::fixed << std::setprecision(2) << price << std::endl;
        }
    }
    inFile.close();
    std::cout << "=======================================" << std::endl;
    return 0;
}