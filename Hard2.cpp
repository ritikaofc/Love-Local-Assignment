/*HARD 2

Logic:
The logic of the shortestPalindrome function is to find the length of the longest palindrome prefix in the given string s. Once the length of this prefix is determined, the function constructs the shortest palindrome by reversing the remaining suffix and concatenating it to the beginning of the original string.

Algorithm:
1.Initialize a variable i to 0. This variable represents the length of the longest palindrome prefix.
2.Iterate from the end of the string towards the beginning (from j = n-1 to j = 0), comparing characters at positions i and j.
  If str[i] is equal to str[j], increment i.
3.Check for palindrome
4.The entire string is not a palindrome, construct the shortest palindrome by:
Taking the suffix of the original string from position i to the end (rem).
Reversing the suffix.
Concatenating the reversed suffix with the original string excluding the palindrome prefix.
5.Recursively call the shortestPalindrome function on the substring from the beginning of the string to position i
6.Return result

Time complexity:O(n^2) where n is length of string
*/



#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string shortestPalindrome(string str) {
        int n = str.length();
        int i = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (str[i] == str[j]) i++;
        }
        if (i == n) return str;
        string rem = str.substr(i);
        reverse(rem.begin(), rem.end());
        return rem + shortestPalindrome(str.substr(0, i)) + str.substr(i);
    }
};

int main() {
    Solution solution;

    string s;
    cout << "Enter a string: ";
    cin >> s;

    string result = solution.shortestPalindrome(s);

    cout << "Shortest Palindrome: " << result << endl;

    return 0;
}
