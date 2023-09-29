//
// Created by chava on 26/09/23.
//
#include <iostream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

bool isPermutuation(string str, string perm) {
    if (str.length() != perm.length()) return false;
    for (int i = 0; i < perm.length(); ++i) {
        if (str.find(perm[i]) != str[i] - 48) return false;
    }
    return true;
}


bool isPermutuationAscii(string s, string t) {
    if (s.length() != t.length()) return false;
    int ascii[128] = {0};
    for (char x: s) {
        ascii[(int) x]++;
    }
    for (int i = 0; i < t.length(); ++i) {
        ascii[(int) t[i]]--;
        if (ascii[(int) t[i]] > 0) return false;
    }
    return true;
}

int main() {
    cout << isPermutuation("12403", "24510") << endl;
    cout << isPermutuationAscii("hoela", "alohe");
    return 0;
}