//
// Created by chava on 28/05/25.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &strs) {
    string s = "";
    int size = strs.size();
    for (int i = 0; i != 1; i++) {
        for (int j = 0; j < strs[i].size(); j++) {
            char letter = strs[i][j];
            int l = i;
            while (l < size - 1) {
                if (strs[l][j] != strs[l + 1][j]) {
                    if (s != "") return s;
                    return "";
                }
                l++;
            }
            s = s + letter;
        }
    }
    return s;
}

int main() {
    vector<string> str = {"", "b"};
    cout << longestCommonPrefix(str);
}