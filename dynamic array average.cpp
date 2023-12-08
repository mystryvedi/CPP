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
return sum / static_cast<double>(size);
}
int main() {
    int size;

    // Input: Get the size of the array from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
// Dynamically allocate memory for the array
    int* dynamicArray = new int[size];

    // Input: Get the elements of the array from the user
    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> dynamicArray[i];
    }
