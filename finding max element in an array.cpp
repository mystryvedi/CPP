#include <iostream>

// Function to find the maximum element in an array
int findMax(const int arr[], int size) {
    if (size <= 0) {
        // Handle the case of an empty array
        std::cerr << "Error: Empty array." << std::endl;
        return -1;
    }

    int max = arr[0]; // Assume the first element is the maximum

    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    const int size = 5;
    int numbers[size];

    // Input: Get numbers from the user
    std::cout << "Enter " << size << " numbers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // Call the function to find the maximum
    int maxElement = findMax(numbers, size);

    // Output: Display the result
    if (maxElement != -1) {
        std::cout << "The maximum element in the array is: " << maxElement << std::endl;
    }

    return 0;
}
