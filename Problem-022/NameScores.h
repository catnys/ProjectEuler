#ifndef NAMESCORES_H
#define NAMESCORES_H

#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

class NameScores {
public:
    NameScores(const std::string &filename);
    long long calculateTotalScore();

private:
    std::vector<std::string> names;
    void loadNamesFromFile(const std::string &filename);
    int nameScore(const std::string &name, int position);
};

#endif
