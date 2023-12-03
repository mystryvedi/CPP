#include <iostream>
#include <cstdlib> // for rand() and srand() functions
#include <ctime>   // for time() function

int main() {
    // Seed the random number generator
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to Guess the Number!" << std::endl;

    do {
        // Get user's guess
        std::cout << "Enter your guess (between 1 and 100): ";
        std::cin >> guess;

        // Increment the number of attempts
        attempts++;

        // Check the guess
        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }

    } while (guess != secretNumber);

    return 0;
}
