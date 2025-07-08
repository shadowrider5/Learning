#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> numbersList;
    char userChoice;
    do {

        cout << "P - Print numbers\n"
        << "A - Add a number\n"
        << "M - Display mean of the numbers\n"
        << "S - Display the smallest number\n"
        << "L - Display the largest number\n"
        << "Q - Quit\n\n"
        << "Enter your choice: ";

        cin >> userChoice;

        switch (userChoice) {
            case 'P':
            case 'p':
                cout << "[ ";
                for (int num : numbersList) {
                cout << num << " ";
                }
                (numbersList.empty())? cout << "] - the list is empty\n\n": cout << "]\n\n";
                break;
            case 'A':
            case 'a': {
                int inputNumber;
                cout << "Enter an integer: ";
                cin >> inputNumber;
                numbersList.push_back(inputNumber);
                cout << inputNumber << " added to the list.\n\n";
                }
                break;
            case 'M':
            case 'm': {
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
                break;
            case 'S':
            case 's': {
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
                break;
            case 'L':
            case 'l': {
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
                break;
            case 'Q':
            case 'q':
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Unknown selection, please try again.\n\n";
        }
     }while (userChoice != 'q' && userChoice != 'Q');

}
