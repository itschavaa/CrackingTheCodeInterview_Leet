//
// Created by chava on 27/09/23.
//
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool isPalindromeInteger(int x) {
    int num = x;
    int aux = 0;
    while (x != 0){
        int p = x % 10;
        aux = aux * 10 + p;
        x = x / 10;
    }
    if (aux == num) return true;
    return false;
}

bool isPalindromeString(int x){
    string num = to_string(x);
    int n = num.length();
    for (int i = 0; i < n/2; ++i) {
        if (num[i] != num[n-1-i]) return false;
    }
    return true;
}

int main() {
    cout << isPalindromeString(121);
    return 0;
}