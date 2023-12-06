#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

// Function to count the occurrences of each word in a file
std::map<std::string, int> countWords(const std::string& filename) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file." << std::endl;
        return {};
    }

    std::map<std::string, int> wordCount;
    std::string line;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string word;

        while (iss >> word) {
            // Remove punctuation from the word
            word.erase(std::remove_if(word.begin(), word.end(), ::ispunct), word.end());

            // Convert the word to lowercase
            std::transform(word.begin(), word.end(), word.begin(), ::tolower);

            // Update the word count
            wordCount[word]++;
        }
    }

    file.close();
    return wordCount;
}

int main() {
    std::string filename;

    // Input: Get the filename from the user
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    // Call the function to count words in the file
    std::map<std::string, int> wordCount = countWords(filename);

    // Output: Display the word count
    std::cout << "\nWord count in the file:\n";
    for (const auto& pair : wordCount) {
        std::cout << pair.first << ": " << pair.second << " occurrences\n";
    }

    return 0;
}
