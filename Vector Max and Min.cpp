#include <iostream>
#include <vector>
#include <algorithm>

// Function to find the maximum and minimum values in a vector
void findMaxAndMin(const std::vector<int>& vec) {
    if (vec.empty()) {
        std::cerr << "Error: Empty vector." << std::endl;
        return;
    }

    // Use std::minmax_element to find the minimum and maximum values
    auto result = std::minmax_element(vec.begin(), vec.end());

    // Dereference the iterators to get the values
    int minValue = *result.first;
    int maxValue = *result.second;

    / Display the results
    std::cout << "Minimum value: " << minValue << std::endl;
    std::cout << "Maximum value: " << maxValue << std::endl;
}

int main() {
    int size;

    // Input: Get the size of the vector from the user
    std::cout << "Enter the size of the vector: ";
    std::cin >> size;

    // Input: Get the elements of the vector from the user
    std::vector<int> numbers(size);
    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> numbers[i];
    }
    // Call the function to find the max and min
    findMaxAndMin(numbers);

    return 0;
}
