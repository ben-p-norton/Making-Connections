#include <iostream>
using namespace std;

bool testPuzzle();
bool testGrid();

int main() {
    if (testPuzzle()) {
        cout << "Passed all Card test cases" << endl;
    }
    if (testGrid()) {
        cout << "Passed all Deck test cases" << endl;
    }
    return 0;
}

bool testPuzzle() {
    bool passed = true;
    if (false) { // TODO: Player test cases
        passed = false;
        cout << "FAILED test case" << endl;
    }
}

bool testGrid() {
    bool passed = true;
    if (false) { // TODO: Grid test cases (also Grid class lol)
        passed = false;
        cout << "FAILED test case" << endl;
    }
}