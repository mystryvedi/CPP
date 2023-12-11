#include <iostream>
#include <vector>
#include <algorithm>

// Function to find the maximum and minimum values in a vector
void findMaxAndMin(const std::vector<int>& vec) {
    if (vec.empty()) {
        std::cerr << "Error: Empty vector." << std::endl;
        return;
    }
