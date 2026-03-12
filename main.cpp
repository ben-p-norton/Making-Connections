#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int getIntFromUser(const string& message, const int& low, const int& high);

int main() {
    string puzName = "whoAreYou.txt";
    int puzListPref = getIntFromUser("Please enter [0] to play the default puzzle or [1] to view puzzle options: ", 0, 1);
    if (puzListPref == 0) {
        cout << "Good choice!" << endl;
    }
    else {
        cout << "Sorry, no other puzzles available yet." << endl;
    }
    return 0;
}

int getIntFromUser(const string& message, const int& low, const int& high) {
    int num;
    string input;
    while (true) {
        cout << message;
        getline(cin, input);
        stringstream ss(input);
        if (ss >> num && ss.eof() && low <= num && num <= high) {
            return num;
        }
        cout << "Invalid input. ";
    }
}