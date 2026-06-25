#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0)
        return false;

    long long rev = 0;
    int original = x;

    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    return rev == original;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a Palindrome Number." << endl;
    else
        cout << num << " is NOT a Palindrome Number." << endl;

    return 0;
}