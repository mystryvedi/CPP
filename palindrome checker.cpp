#include <iostream>
#include <string>
#include <cctype> // for tolower() function

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& str) {
    // Create a copy of the string and convert it to lowercase
    std::string lowercaseStr = str;
    for (char& ch : lowercaseStr) {
        ch = std::tolower(ch);
    }

    // Check if the string is a palindrome
    int left = 0;
    int right = lowercaseStr.length() - 1;

    while (left < right) {
        if (lowercaseStr[left] != lowercaseStr[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }

    return true; // Palindrome
}

int main() {
    std::string input;

    // Input: Get a string from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Call the function to check if it's a palindrome
    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << input << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
