#include <iostream>  // для std::cin, std::cout, std::endl
#include <string>    // для std::string
#include "remove_vowels.h"

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string result = removeVowels(input);
    std::cout << result << std::endl;

    return 0;
}
