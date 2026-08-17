#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
struct Product {
    std::string name;
    std::string category;
    double price;
};
class FlipkartSearch {
private:
    std::vector<Product> inventory;
public:
    FlipkartSearch() {
        inventory = {
            {"iPhone 15", "Electronics", 79999.00},
            {"Samsung Galaxy S24", "Electronics", 74999.00},
            {"Nike Running Shoes", "Footwear", 4999.00},
            {"Puma Casual Shoes", "Footwear", 2999.00},
            {"iPhone 13", "Electronics", 52999.00}
        };
    }
    void searchProduct(const std::string& productName) {
        std::cout << "\n=== Search Results for Name: '" << productName << "' ===" << std::endl;
        bool found = false;
        for (const auto& item : inventory) {
            if (item.name.find(productName) != std::string::npos) {
                std::cout << "  - " << item.name << " | Category: " << item.category << " | Price: ₹" << item.price << std::endl;
                found = true;
            }
        }
        if (!found) std::cout << "No matching products found." << std::endl;
    }
    void searchProduct(const std::string& productName, const std::string& category) {
        std::cout << "\n=== Search Results for Name: '" << productName << "' in Category: '" << category << "' ===" << std::endl;
        bool found = false;
        for (const auto& item : inventory) {
            if (item.name.find(productName) != std::string::npos && item.category == category) {
                std::cout << "  - " << item.name << " | Category: " << item.category << " | Price: ₹" << item.price << std::endl;
                found = true;
            }
        }
        if (!found) std::cout << "No matching products found in this category." << std::endl;
    }
};
int main() {
    FlipkartSearch searchEngine;
    searchEngine.searchProduct("iPhone");
    searchEngine.searchProduct("Shoes", "Footwear");
    return 0;
}