#include <iostream>
#include <vector>
#include <random>
#include <chrono>

#define F 70
#define L 76
#define A 65
#define G 71
#define OPEN 123
#define ONE 49
#define THREE 51
#define FOUR 52
#define FIVE 53
#define CLOSE 125

int random_offset() {
    std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
    return rng() % 3;
}

std::vector<int> getAsciiValues() {
    std::vector<int> values;
    values.push_back(F);
    values.push_back(L);
    values.push_back(A);
    values.push_back(G);
    values.push_back(OPEN);
    values.push_back(ONE);
    values.push_back(THREE);
    values.push_back(ONE);
    values.push_back(FOUR);
    values.push_back(ONE);
    values.push_back(FIVE);
    values.push_back(CLOSE);
    return values;
}

char obfuscate(int value) {
    return static_cast<char>(value);
}

void printFlag() {
    std::cout << "The flag is: ";
    std::vector<int> asciiValues = getAsciiValues();
    for (size_t i = 0; i < asciiValues.size(); ++i) {
        char c = obfuscate(asciiValues[i]);
        std::cout << c;
    }
    std::cout << std::endl;
}

int main() {
    printFlag();
    return 0;
}
