#include <iostream>
#include <string>
class Product {
private:
    std::string productName;
    double price;
    double rating;
public:
    Product(const std::string& name, double cost, double stars)
        : productName(name), price(cost), rating(stars) {}
    void displayInfo() const {
        std::cout << "========================================" << std::endl;
        std::cout << "Product  : " << productName << std::endl;
        std::cout << "Price    : ₹" << price << std::endl;
        std::cout << "Rating   : " << rating << " / 5.0 ★" << std::endl;
        std::cout << "========================================" << std::endl;
    }
};
int main() {
    Product item1("Wireless Noise-Canceling Headphones", 4999.00, 4.5);
    Product item2("Smartwatch with Fitness Tracker", 2499.50, 4.2);
    item1.displayInfo();
    std::cout << std::endl;
    item2.displayInfo();
    return 0;
}