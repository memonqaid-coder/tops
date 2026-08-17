#include <iostream>
#include <string>
class UserProfile {
private:
    std::string username;
    std::string phoneNumber;

public:
    UserProfile(const std::string& uname, const std::string& phone)
        : username(uname), phoneNumber(phone) {}
    std::string getPhoneNumber() const {
        return phoneNumber;
    }
    void setPhoneNumber(const std::string& newPhone) {
        if (newPhone.length() >= 10) {
            phoneNumber = newPhone;
            std::cout << "-> Phone number successfully updated!" << std::endl;
        } else {
            std::cout << "-> Error: Invalid phone number length." << std::endl;
        }
    }
    void displayProfile() const {
        std::cout << "=== User Profile ===" << std::endl;
        std::cout << "Username : @" << username << std::endl;
        std::cout << "Phone    : " << phoneNumber << std::endl;
        std::cout << "--------------------" << std::endl;
    }
};
int main() {
    UserProfile user("alex_dev", "+1-555-0198");
    user.displayProfile();
    std::cout << "\nUpdating phone number via setter..." << std::endl;
    user.setPhoneNumber("+1-555-8888");
    std::cout << "Retrieved via getter: " << user.getPhoneNumber() << "\n" << std::endl;
    user.displayProfile();
    return 0;
}