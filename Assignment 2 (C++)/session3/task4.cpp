#include <iostream>
#include <string>

class Ticket {
private:
    std::string movieName;
    std::string seatNumber;
public:
    Ticket(const std::string& movie, const std::string& seat)
        : movieName(movie), seatNumber(seat) {
        std::cout << "[Constructor] Booking initiated for " << movieName
                  << " (Seat " << seatNumber << ")." << std::endl;
    }
    ~Ticket() {
        std::cout << "[Destructor] Saving your ticket... Ticket for "
                  << movieName << " saved to database." << std::endl;
    }
    void displayInfo() const {
        std::cout << "  -> Active Ticket: " << movieName << " | Seat: "
                  << seatNumber << std::endl;
    }
};
int main() {
    std::cout << "=== BookMyShow Ticket Lifecycle Demo ===\n" << std::endl;
    std::cout << "--- Heap Allocation ---" << std::endl;
    Ticket* myTicket = new Ticket("Interstellar", "A12");
    myTicket->displayInfo();
    std::cout << "Deleting ticket object from heap..." << std::endl;
    delete myTicket;
    std::cout << "\n--- Stack Allocation (Local Scope) ---" << std::endl;
    {
        Ticket scopeTicket("Avatar: The Way of Water", "B15");
        scopeTicket.displayInfo();
        std::cout << "Exiting inner block scope..." << std::endl;
    }
    return 0;
}