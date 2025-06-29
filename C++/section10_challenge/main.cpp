#include <iostream>
#include <string>

using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    std::cout << "Enter a secret message: ";
    string secretMessage;
    getline(cin, secretMessage);

    for (size_t j = 0; j < secretMessage.length(); ++j) {
        for (size_t i = 0; i < alphabet.length(); ++i) {
            if (secretMessage.at(j) == alphabet.at(i)){
                secretMessage.at(j) = key.at(i);
                break;
            }
        }
    }
    // for (char c : secretMessage) {
    //     size_t pos = key.find(c);
    //     if (pos != string::npos) {
    //
    //     }
    //     else
    //
    // }
    cout << "Encoded message: " << secretMessage << endl;

    for (size_t j = 0; j < secretMessage.length(); ++j) {
        for (size_t i = 0; i < key.length(); ++i) {
            if (secretMessage.at(j) == key.at(i)){
                secretMessage.at(j) = alphabet.at(i);
                break;
            }
        }
    }
    cout << "Decoded message: " << secretMessage << endl;

    return 0;
}