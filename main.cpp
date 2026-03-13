#include <string>
#include <iostream>
#include <sstream>
#include "Puzzle.h"

using namespace std;

int getIntFromUser(const string& message, const int& low, const int& high);
void save(Puzzle puzzle);
bool verifyPuzzleExistence(Puzzle puzzle);

void play();
void create();
void edit();

int main() {
    cout << "Welcome!" << endl;
    bool mainLoop = true;
    while (mainLoop) {
        int action = getIntFromUser("Please enter [0] to play a puzzle, [1] to create your\nown, [2] to edit an existing puzzle, or [3] to quit: ", 0, 3);
        if (action == 0) play();
        else if (action == 1) create();
        else if (action == 2) edit();
        else mainLoop = false;

    }
    cout << "Thanks for playing! I hope to see you again soon." << endl;
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

bool verifyPuzzleExistence(Puzzle puzzle) {
    return false; // TODO: implement this function
}

void save(Puzzle puzzle) {
    string filename = "PLACEHOLDER";
    // Check whether a puzzle with the same name already exists
    // If so, make the user rename the puzzle until there is no match
    while (verifyPuzzleExistence(puzzle)) {
        // Prompt user for new name
        // Convert to filename format
        // Check for existing file
    }
    // If not, save the puzzle to a file
    puzzle.desiccate(filename);
    // And add the filename, puzzle name, and size to the csv

}

void play() {
    // Puzzle selection
    string puzName = "whoAreYou.txt";
    int puzListPref = getIntFromUser("Please enter [0] to play the default puzzle or [1] to view puzzle options: ", 0, 1);
    if (puzListPref == 0) {
        cout << "Good choice!" << endl;
    }
    else {
        cout << "Sorry, no other puzzles available yet." << endl;
        // Print the list of puzzle options
        // Prompt user for an index
    }
    puzName = "../Puzzles/" + puzName;
    Puzzle puzzle(puzName);

}

void create() {
    // Prompt user for name and puzzle size
    // Call constructor
    // Once puzzle is made, ask if user wants to save it
}

void edit() {

}