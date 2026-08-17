#include <iostream>
#include <string>

class FoodOrder {
public:
    int orderId;
    std::string restaurantName;
    bool isDelivered;
    FoodOrder(int id, const std::string& restaurant)
        : orderId(id), restaurantName(restaurant), isDelivered(false) {}
    void markDelivered() {
        isDelivered = true;
        std::cout << "Order #" << orderId << " from " << restaurantName
                  << " has been successfully delivered!" << std::endl;
    }
};
int main() {
    FoodOrder myOrder(1042, "Spice Garden");
    myOrder.markDelivered();

    return 0;
}