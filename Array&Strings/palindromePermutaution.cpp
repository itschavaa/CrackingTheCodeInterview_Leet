//
// Created by chava on 29/09/23.
//
#include <iostream>
#include <string>

using namespace std;

bool isPalindromePermutation(string str) {
    int count = 0;
    char letters[(int) 'z' - (int) 'a' - 1] = {0};
    for (char x: str) {
        if (x > 64 && x < 91) x += ' ';
        if (x != ' ') {
            letters[x - 97]++;
            if (letters[x - 97] % 2 == 1) count++;
            else count--;
        }
    }
    return count <= 1;
}

int main() {
    cout << isPalindromePermutation("ateco cbotae");
    return 0;
}