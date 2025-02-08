#include <iostream>
using namespace std;
int main() {
    string str, cleanStr = "";
    cout << "Enter a string: ";
    getline(cin, str);
    for (char ch : str) {
        if (ch != ' ') {
            if (ch >= 'A' && ch <= 'Z')
                cleanStr += ch + 32;
            else
                cleanStr += ch;
        }
    }
    int left = 0, right = cleanStr.length() - 1;
    while (left < right) {
        if (cleanStr[left] != cleanStr[right]) {
            cout << "The string is NOT a palindrome." << endl;
            return 0;
        }
        left++;
        right--;
    }
    cout << "The string IS a palindrome." << endl;
    return 0;
}
