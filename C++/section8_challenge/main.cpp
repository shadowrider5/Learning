#include <iostream>

using namespace std;

int main() {

    cout << "Enter an amount in cents: ";
    int cents;
    cin >> cents;

    const int dollars = cents / 100;
    cents = cents % 100;

    const int quarters = cents / 25;
    cents = cents % 25;

    const int dimes = cents / 10;
    cents = cents % 10;

    const int nickels = cents / 5;
    cents = cents % 5;

    cout
    << "You can provide change for this as follows:"
    << "\ndollars: " << dollars
    << "\nquarters: " << quarters
    << "\ndimes: " << dimes
    << "\nnickels: " << nickels
    << "\npennies: " << cents;
    return 0;
}