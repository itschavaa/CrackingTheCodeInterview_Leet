//
// Created by chava on 21/07/25.
// LeetCode DSA Course - the goal of this code is to reverse and string and the time complexity odf this solution is O(n)
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        char aux;
        int i = 0, j = s.size()-1;
        while (i < j) {
            aux = s[i];
            s[i] = s[j];
            s[j] = aux;
            i++;
            j--;
        }
        return;
    }
};

int main() {
    Solution solution;
    vector<char> string = {'h', 'o', 'l', 'a'};
    for (char c : string) {
        cout << c;
    }
    cout << endl;
    solution.reverseString(string);
    for (char c : string) {
        cout << c;
    }
    cout << endl;
    return 0;
}