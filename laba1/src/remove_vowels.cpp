#include "remove_vowels.h"
#include <cctype>

char toLowerManual(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32; 
    }
    return c;
}


std::string removeVowels(const std::string& input) {
    std::string result;
    for (char c : input) {
        char lower = toLowerManual(c);
        if (lower != 'a' && lower != 'e' && lower != 'i' &&
            lower != 'o' && lower != 'u' && lower != 'y') {
            result.push_back(c);
        }
    }
    return result;
}
