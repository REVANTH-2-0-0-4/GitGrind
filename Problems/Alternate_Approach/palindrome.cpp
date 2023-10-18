#include <bits/stdc++.h>
using namespace std;

bool isPalindromeRecursive(string str, int left, int right) {
  if (left >= right) {
    return true;
  } else if (str[left] != str[right]) {
    return false;
  } else {
    return isPalindromeRecursive(str, left + 1, right - 1);
  }
}

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;

  if (isPalindromeRecursive(str, 0, str.length() - 1)) {
    cout << " Palindrome." << endl;
  } else {
    cout << " Not a Palindrome." << endl;
  }

  return 0;
}

// Provide an another approach to solve the above question 
// (Do you want a hint?).