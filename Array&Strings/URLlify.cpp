//
// Created by chava on 28/09/23.
//
#include <iostream>
#include <string>

using namespace std;

string URLify(string str, int l) {
    int spaces = 0, index;
    for (int i = 0; i < l; i++) {
        if ((int) str[i] == 32) {
            spaces++;
        }
    }
    index = l + spaces * 2;
    for (int i = l - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[index - 1] = '0';
            str[index - 2] = '2';
            str[index - 3] = '%';
            index = index - 3;
        } else {
            str[index - 1] = str[i];
            index--;
        }
    }
    return str;
}

int main() {
    cout << URLify("Mr John Smith    ", 13);
    return 0;
}