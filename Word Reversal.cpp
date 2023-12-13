#include <iostream>
#include <string>
#include <sstream>

// Function to reverse the order of words in a string
std::string reverseWords(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;
    std::string word;

    while (iss >> word) {
        // Add the reversed word to the output stream
        oss << std::string(word.rbegin(), word.rend()) << " ";
    }

    // Get the result as a string
    std::string result = oss.str();

    // Remove the trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    std::string sentence;

    // Input: Get a sentence from the user
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
