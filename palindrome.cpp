#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// Function to check if a word is a palindrome
bool isPalindrome(string word) {
    // Convert to lowercase for case-insensitive comparison
    for (int i = 0; i < word.length(); i++) {
        word[i] = tolower(word[i]);
    }
    
    // Compare characters from both ends moving towards center
    int n = word.length();
    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string word;
    
    cout << "=== Palindrome Checker ===" << endl;
    cout << "Enter a word: ";
    cin >> word;
    
    if (isPalindrome(word)) {
        cout << "\"" << word << "\" is a PALINDROME!" << endl;
    } else {
        cout << "\"" << word << "\" is NOT a palindrome." << endl;
    }
    
    return 0;
}
