#include <iostream>
#include <vector>

int main() {
    const int targetSum = 10;
    const int sides = 6;
    int count = 0;
    std::vector<std::tuple<int, int, int>> combinations;

    for (int d1 = 1; d1 <= sides; ++d1) {
        for (int d2 = 1; d2 <= sides; ++d2) {
            for (int d3 = 1; d3 <= sides; ++d3) {
                if (d1 + d2 + d3 == targetSum) {
                    combinations.emplace_back(d1, d2, d3);
                    count++;
                }
            }
        }
    }

    std::cout << "Combinations of 3 dice that sum to " << targetSum << ":\n";
    for (const auto& combo : combinations) {
        int d1, d2, d3;
        std::tie(d1, d2, d3) = combo;
        std::cout << "(" << d1 << ", " << d2 << ", " << d3 << ")\n";
    }

    const int totalOutcomes = sides * sides * sides;
    std::cout << "\nTotal valid outcomes: " << count << "\n";
    std::cout << "Total possible outcomes: " << totalOutcomes << "\n";
    std::cout << "Probability: " << count << " / " << totalOutcomes
              << " = " << static_cast<double>(count) / totalOutcomes << "\n";

    return 0;
}
