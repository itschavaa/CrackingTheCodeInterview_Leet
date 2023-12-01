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
    for (char i : t) {
        ascii[(int) i]--;
    }
    for (char i : t) {
        if (ascii[(int) i] > 0) return false;
    }
    return true;
}

int main() {
    cout << isPermutuation("god", "dog") << endl;
    cout << isPermutuationAscii("abbaa", "babab");
    return 0;
}