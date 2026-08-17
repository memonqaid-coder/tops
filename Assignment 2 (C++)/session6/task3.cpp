#include <iostream>
#include <string>
class Product {
protected:
    std::string productName;
    double price;
public:
    Product(const std::string& name, double cost)
        : productName(name), price(cost) {}
    virtual ~Product() = default;
    virtual void upload() const = 0;
};
class Electronics : public Product {
private:
    int warrantyMonths;
public:
    Electronics(const std::string& name, double cost, int warranty)
        : Product(name, cost), warrantyMonths(warranty) {}
    void upload() const override {
        std::cout << "[Flipkart Seller Hub - Electronics]" << std::endl;
        std::cout << "-> Uploading electronic item: '" << productName << "' (Price: ₹" << price << ")" << std::endl;
        std::cout << "-> Validating technical specs & " << warrantyMonths << "-month warranty compliance..." << std::endl;
        std::cout << "-> Status: Product successfully listed on Flipkart Electronics!\n" << std::endl;
    }
};
class Clothing : public Product {
private:
    std::string size;
public:
    Clothing(const std::string& name, double cost, const std::string& itemSize)
        : Product(name, cost), size(itemSize) {}
    void upload() const override {
        std::cout << "[Flipkart Seller Hub - Fashion/Clothing]" << std::endl;
        std::cout << "-> Uploading apparel item: '" << productName << "' (Price: ₹" << price << ")" << std::endl;
        std::cout << "-> Processing size chart (" << size << ") & fabric return policy details..." << std::endl;
        std::cout << "-> Status: Product successfully listed on Flipkart Fashion!\n" << std::endl;
    }
};
int main() {
    Product* laptop = new Electronics("Asus ROG Gaming Laptop", 85000.00, 24);
    Product* tShirt = new Clothing("Overized Cotton T-Shirt", 799.00, "L");
    std::cout << "=== Flipkart Seller Portal - Product Upload Demo ===\n" << std::endl;
    laptop->upload();
    tShirt->upload();
    delete laptop;
    delete tShirt;
    return 0;
}