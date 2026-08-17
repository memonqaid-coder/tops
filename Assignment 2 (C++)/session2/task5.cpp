#include <iostream>
#include <string>
struct FoodOrderConfig {
    int orderId;
    std::string restaurantName;
    bool isDelivered = false; // Default parameter
};
class FoodOrder {
public:
    int orderId;
    std::string restaurantName;
    bool isDelivered;
    FoodOrder(const FoodOrderConfig& config)
        : orderId(config.orderId),          restaurantName(config.restaurantName),
          isDelivered(config.isDelivered) {}
    void markDelivered() {
        isDelivered = true;
        std::cout << "Order #" << orderId << " from " << restaurantName
                  << " has been successfully delivered!" << std::endl;
    }
    void displayStatus() const {
        std::cout << "Order #" << orderId << " | " << restaurantName
                  << " | Delivered: " << (isDelivered ? "Yes" : "No") << std::endl;
    }
};
int main() {
    FoodOrderConfig config1{1042, "Spice Garden", false};
    FoodOrder myOrder1(config1);
    FoodOrder myOrder2(FoodOrderConfig{
        .orderId = 1043,
        .restaurantName = "Sushi Express",
        .isDelivered = false
    });
    std::cout << "=== Initial Order Status ===" << std::endl;
    myOrder1.displayStatus();
    myOrder2.displayStatus();
    std::cout << "\n--> Updating Delivery Status..." << std::endl;
    myOrder1.markDelivered();
    std::cout << "\n=== Updated Order Status ===" << std::endl;
    myOrder1.displayStatus();
    return 0;
}