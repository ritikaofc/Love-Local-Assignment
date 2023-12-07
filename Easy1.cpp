
/*EASY 1


Logic:To find length of last word in string, we need to iterate through the string in reverse, skip consecutive spaces, and count the characters of the last word until a space is encountered. The length of the last word is then returned."

Algorithm:
Length of Last Word
1.Take string s as input
2.Initialise length  to 0
3.Iterate through the characters in the string from end to start
4.If current character is a space:
  If length is greater than 0, break out of the loop.
  If length is 0, continue to skip consecutive spaces.
5.If current character is not a space:
  Increment length by 1 and move on to next character.
6.Return final value of length

Main Function:
1.Ask user to enter a sentence and reac input through getline
2.Call algorithm function with this sentence as argument
3.Print the result

Time complexity: O(n) where n is the length of the string
Space complexity: O(1) because no extra space used
*/






#include<iostream>
#include<string>
using namespace std;

int lastWordLength(string s) {
    int length = 0; 
    int n = s.length();
    
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == ' ') {
            if (length > 0) {
                break;
            }
        } else {
            ++length;
        }
    }

    return length;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "The length of the last word is " << lastWordLength(str) << endl;
    return 0;
}