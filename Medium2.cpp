/*MEDIUM 2

Logic:
The logic of the provided C++ code is to find elements in a vector that appear more than n/3 times, where n is the size of the vector. The algorithm uses an unordered map to keep track of the frequency of each element in the vector.

Algorithm:
1.Create an unordered map m to store the frequency of each element.
Initialize an empty vector result to store elements that appear more than n/3 times.
2.Use a for-each loop to iterate through each element (i) in the input vector (nums).
Update Frequency in Map
3.Increment the frequency of the current element in the map.
4.Check if the updated frequency of the current element is greater than nums.size() / 3. If true, it indicates that the current element appears more than n/3 times.
5.If the condition is met, add the current element to the result vector.
6.After iterating through the entire vector, return the result vector containing elements that appear more than n/3 times.

The time complexity of the provided code is O(N), where N is the size of the input

*/






#include<iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> findElements(vector<int>& nums) {
    unordered_map<int, int> m;

    vector<int> result;
    for (int i : nums) {
        if (++m[i] > nums.size() / 3) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    vector<int> v = {2, 2, 2, 3, 1, 3, 2, 1, 1};
    vector<int> result = findElements(v);
    for (int element : result) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}