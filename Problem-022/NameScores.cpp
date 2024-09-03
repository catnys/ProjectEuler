#include "NameScores.h"

NameScores::NameScores(const std::string &filename) {
    loadNamesFromFile(filename);
    std::sort(names.begin(), names.end());
}

void NameScores::loadNamesFromFile(const std::string &filename) {
    std::ifstream file(filename);
    std::string name;
    while (file >> name) {
        names.push_back(name.substr(1, name.length() - 2)); // Remove quotes around names
    }
}

int NameScores::nameScore(const std::string &name, int position) {
    int score = 0;
    for (char c : name) {
        score += (c - 'A' + 1);
    }
    return score * position;
}

long long NameScores::calculateTotalScore() {
    long long totalScore = 0;
    for (size_t i = 0; i < names.size(); ++i) {
        totalScore += nameScore(names[i], i + 1);
    }
    return totalScore;
}
