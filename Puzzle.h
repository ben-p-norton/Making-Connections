#ifndef MAKING_CONNECTIONS_PUZZLE_H
#define MAKING_CONNECTIONS_PUZZLE_H

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>

using std::string, std::iostream, std::transform,
      std::vector, std::cin, std::cout, std::endl, std::fstream,
      std::istringstream;

class Puzzle {
private:
    string name;
    int size;
    vector<vector<string>> groups;

    void createGroups();
    void addTerm(string& main, const string& term);
    string desiccate();
    void reconstitute(string dryPuzzle);

public:
    // Constructors
    Puzzle(int size, std::string name);
    Puzzle(const std::string& dryPuzzle);

    void save(string filename);

    // Getters
    vector<vector<int>> getGroups();
    string getName();


};

#endif //MAKING_CONNECTIONS_PUZZLE_H