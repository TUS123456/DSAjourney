#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

string canMakePalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (!isPalindrome(s, 0, i)) {
            // Check if the remaining part of the string can be a palindrome
            string remaining = s.substr(i, n - i);
            if (isPalindrome(remaining, 0, remaining.length() - 1)) {
                return "YES";
            }
            return "NO";
        }
    }
    return "YES"; // If the string is already a palindrome
}

int main() {
    string s = "aaaabbbb";

    string result = canMakePalindrome(s);
    cout << result << endl;

    return 0;
}
