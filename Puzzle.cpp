//
// Created by Ben Norton on 3/12/26.
//

#include "Puzzle.h"

// Constructors
Puzzle::Puzzle(unsigned long size, string name) {
    if (name != "") {
        this->name = name;
    }
    else {
        this->name = "New Puzzle";
    }

    this->size = size;
    groups = vector<vector<string>>{size};
    createGroups();
}

Puzzle::Puzzle(const std::string& filename) {
    reconstitute(filename);
}

// General methods
void Puzzle::desiccate(string filename) {
    // Open ofstream with given filename
    fstream puzFileOut(filename, ios::out);
    // Record puzzle name and size
    puzFileOut << name << endl;
    puzFileOut << size << endl;
    // For each group, record theme and each word
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size + 1; ++j) {
            puzFileOut << groups[i][j] << endl;
        }
    }
    puzFileOut.close();
}

void Puzzle::reconstitute(string filename) {
    fstream puzFileIn(filename, ios::in);
    getline(puzFileIn, name);
    string temp;
    getline(puzFileIn, temp);
    size = stoul(temp);
    groups = vector<vector<string>>{size};
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size + 1; ++j) {
            getline(puzFileIn, groups[i][j]);
        }
    }
    puzFileIn.close();

}

// Helper methods
void Puzzle::createGroups() {
    std::string temp;
    for (int i = 0; i < (size); ++i) {
        cout << "Enter a theme for category #" << i + 1 << ": ";
        getline(cin, temp);
        groups[i].push_back(temp);
        cin.clear();
        for (int j = 0; j < size; ++j) {
            cout << "Enter item #" << j + 1 << " for category #" << i + 1 << ": ";
            getline(cin, temp);
            transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
            groups[i].push_back(temp);
        }
        cout << endl;
    }
}