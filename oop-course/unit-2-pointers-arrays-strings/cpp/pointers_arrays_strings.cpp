#include <iostream>
#include <string>
using namespace std;

void printUsingPointer(const int* values, int length) {
    for (const int* current = values; current < values + length; current++) {
        cout << *current << ' ';
    }
    cout << '\n';
}

bool isPalindrome(const string& text) {
    int left = 0;
    int right = static_cast<int>(text.size()) - 1;
    while (left < right) {
        if (text[left] != text[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    int values[]{2, 4, 6, 8};
    printUsingPointer(values, 4);
    string text = "level";
    cout << text << " is " << (isPalindrome(text) ? "a palindrome" : "not a palindrome") << '\n';
    return 0;
}
