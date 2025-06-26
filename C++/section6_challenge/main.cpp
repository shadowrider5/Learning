#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    constexpr double smallRoomPrice = 25.00;
    constexpr double largeRoomPrice = 35.00;
    constexpr double taxRate = 0.06;

    cout << "Hello, welcome to frank's carpet cleaning service\n"
                 "how many small rooms would you like cleaned? ";
    int numberOfSmallRooms;
    cin >> numberOfSmallRooms;

    cout << "how many large rooms would you like cleaned? ";
    int numberOfLargeRooms;
    cin >> numberOfLargeRooms;

    const double totalCost = (numberOfSmallRooms * smallRoomPrice) + (numberOfLargeRooms * largeRoomPrice);
    const double totalCostWithTax = totalCost + (taxRate * totalCost);
    cout << fixed << setprecision(2);
    cout << "Estimate for carpet cleaning service\n"
            "Number of small rooms: " << numberOfSmallRooms << "\n"
            "Number of large rooms: " << numberOfLargeRooms << "\n"
            "Price per small room: $" << smallRoomPrice << "\n"
            "Price per large room: $" << largeRoomPrice << "\n"
            "Total cost: $" << (totalCost) << "\n"
            "Tax rate: " << (taxRate * 100) << "%\n"
            "===============================================\n"
            "Total cost with tax: $" << totalCostWithTax << "\n"
            "This estimate is valid for 30 days\n";

    return 0;
}

