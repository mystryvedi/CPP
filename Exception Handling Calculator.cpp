#include <iostream>
#include <stdexcept> // for std::runtime_error

// Function to perform division with exception handling
double divide(double numerator, double denominator) {
    if (denominator == 0.0) {
        throw std::runtime_error("Error: Division by zero.");
    }
    return numerator / denominator;
}

int main() {
    double num1, num2;

    // Input: Get two numbers from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;
