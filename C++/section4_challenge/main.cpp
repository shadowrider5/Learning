#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    cout << "what is your favourite number between 1 and 100: ";
    int favouriteNumber;
    cin >> favouriteNumber;
    cout << "Amazing!! That's my favourite number too!" << endl;
    cout << "No really!!, " << favouriteNumber <<" is my favourite number too!";
    return 0;
}

// This program prompts the user to enter their favorite number between 1 and 100 and then responds with a message indicating that it is also the program's favorite number.