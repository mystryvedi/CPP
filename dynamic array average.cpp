#include <iostream>

// Function to find the average of an array
double findAverage(const int* arr, int size) {
    if (size <= 0) {
        std::cerr << "Error: Empty array." << std::endl;
        return 0.0;
    }
double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
