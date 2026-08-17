#include <iostream>
#include <string>
#include <iomanip>
class PaymentProcessor {
public:
    void processPayment(double amount) {
        std::cout << "[Method 1 Called: Standard Payment]" << std::endl;
        std::cout << "Processing payment without coupon..." << std::endl;
        std::cout << "Final Amount: $" << std::fixed << std::setprecision(2) << amount << std::endl;
        std::cout << "----------------------------------------" << std::endl;
    }
    void processPayment(double amount, const std::string& couponCode) {
        std::cout << "[Method 2 Called: Coupon Payment]" << std::endl;
        std::cout << "Applying coupon code: " << couponCode << std::endl;
        double discountRate = 0.0;
        if (couponCode == "SAVE10") {
            discountRate = 0.10;
        } else if (couponCode == "SAVE20") {
            discountRate = 0.20;
        } else {
            std::cout << "Invalid or expired coupon code. No discount applied." << std::endl;
        }
        double finalAmount = amount - (amount * discountRate);
        std::cout << "Final Amount: $" << std::fixed << std::setprecision(2) << finalAmount << std::endl;
        std::cout << "----------------------------------------" << std::endl;
    }
};
int main() {
    PaymentProcessor processor;
    processor.processPayment(100.00);
    processor.processPayment(100.00, "SAVE20");
    return 0;
}