#ifndef MAKING_CONNECTIONS_PUZZLE_H
#define MAKING_CONNECTIONS_PUZZLE_H

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <ios>

using std::string, std::iostream, std::transform,
      std::vector, std::cin, std::cout, std::endl, std::fstream,
      std::istringstream, std::ios;

class Puzzle {
private:
    string name;
    unsigned long size;
    vector<vector<string>> groups;

    void createGroups();

public:
    // Constructors
    Puzzle(unsigned long size, std::string name);
    Puzzle(const std::string& filename);

    // Getters
    string getName();

    // Conversion to and from txt file
    void desiccate(string filename);
    void reconstitute(string filename);


};

#endif //MAKING_CONNECTIONS_PUZZLE_H