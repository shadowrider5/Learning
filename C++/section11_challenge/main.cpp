#include <iostream>
#include <vector>

using namespace std;

void display_menu();
char user_choice_to_lower(char&);
void print_numbers(const vector<int>& numbersList);
void append_numbers(vector<int>& numbersList);
void mean(const vector<int>& numbersList);
void smallest_number(const vector<int>& numbersList);
void largest_number(const vector<int>& numbersList);
void quit();
void unknown();
//we can separate the functions where one function does the logic of finding or calculating and so on and the other handles what we want to output or anything else for easier maintenance

int main() {

    vector <int> numbersList;
    char userChoice;

    do {
        display_menu();

        cin >> userChoice;
        user_choice_to_lower(userChoice);

        switch (userChoice) {
            case 'p':
                print_numbers(numbersList);
                break;
            case 'a':
                append_numbers(numbersList);
                break;
            case 'm':
                mean(numbersList);
                break;
            case 's':
                smallest_number(numbersList);
                break;
            case 'l':
                largest_number(numbersList);
                break;
            case 'q':
                quit();
                break;
            default:
                unknown();
        }
     }while (userChoice != 'q' && userChoice != 'Q');

}


void display_menu() {
    cout << "P - Print numbers\n"
         << "A - Add a number\n"
         << "M - Display mean of the numbers\n"
         << "S - Display the smallest number\n"
         << "L - Display the largest number\n"
         << "Q - Quit\n";
}

char user_choice_to_lower(char& userChoice) {
    if (userChoice >= 'A' && userChoice <= 'Z') {
        userChoice += ('a' - 'A'); // Convert to lowercase
    }
    return userChoice;
}


void print_numbers(const vector<int>& numbersList) {
    cout << "[ ";
    for (int num : numbersList) {
        cout << num << " ";
    }
    (numbersList.empty())? cout << "] - the list is empty\n\n": cout << "]\n\n";
}

void append_numbers(vector<int>& numbersList) {
    int inputNumber;
    cout << "Enter an integer: ";
    cin >> inputNumber;
    numbersList.push_back(inputNumber);
    cout << inputNumber << " added to the list.\n\n";
}

void mean(vector<int>& numbersList) {
    if (numbersList.empty())
        cout << "Unable to calculate the mean - no data\n\n";
    else {
        int sum{};
        for (int num : numbersList) {
            sum += num;
        }
        double mean = static_cast<double>(sum) / static_cast<double>(numbersList.size());
        cout << "the mean= "<< mean << "\n\n";
    }
}

void smallest_number(const vector<int>& numbersList) {
    if (numbersList.empty())
        cout << "the list is empty\n\n";
    else {
        int smallestNumber{numbersList.at(0)};
        for (int num : numbersList) {
            if (num<smallestNumber) {
                smallestNumber = num;
            }
        }
        cout << "The smallest number is " << smallestNumber << "\n\n";
    }
}

void largest_number(const vector<int>& numbersList) {
    if (numbersList.empty())
        cout << "the list is empty\n\n";
    else {
        int LargestNumber{numbersList.at(0)};
        for (int num : numbersList) {
            if (num>LargestNumber) {
                LargestNumber = num;
            }
        }
        cout << "The Largest number is " << LargestNumber << "\n\n";
    }
}

void quit() {
    cout << "Goodbye!\n";
}

void unknown() {
    cout << "Unknown selection, please try again.\n\n";
}