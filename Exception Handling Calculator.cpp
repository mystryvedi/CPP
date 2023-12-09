#include <iostream>
#include <stdexcept> // for std::runtime_error

// Function to perform division with exception handling
double divide(double numerator, double denominator) {
    if (denominator == 0.0) {
        throw std::runtime_error("Error: Division by zero.");
    }
    return numerator / denominator;
}
