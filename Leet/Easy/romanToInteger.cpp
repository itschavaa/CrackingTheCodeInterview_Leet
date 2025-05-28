//
// Created by chava on 28/05/25.
//

#include <iostream>
#include <string>

using namespace std;

int romanToInt(const string &s) {
    int count = 0;
    string::iterator it;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'I') {
            if (i + 1 < s.length() && s[i + 1] == 'V') {
                count = count + 4;
                i++;
            } else if (i + 1 < s.length() && s[i + 1] == 'X') {
                count = count + 9;
                i++;
            } else {
                count = count + 1;
            }
        } else if (s[i] == 'V') {
            count = count + 5;
        } else if (s[i] == 'X') {
            if (i + 1 < s.length() && s[i + 1] == 'L') {
                count = count + 40;
                i++;
            } else if (i + 1 < s.length() && s[i + 1] == 'C') {
                count = count + 90;
                i++;
            } else {
                count = count + 10;
            }
        } else if (s[i] == 'L') {
            count = count + 50;
        } else if (s[i] == 'C') {
            if (i + 1 < s.length() && s[i + 1] == 'D') {
                count = count + 400;
                i++;
            } else if (i + 1 < s.length() && s[i + 1] == 'M') {
                count = count + 900;
                i++;
            } else {
                count = count + 100;
            }
        } else if (s[i] == 'D') {
            count = count + 500;
        } else if (s[i] == 'M') {
            count = count + 1000;
        }
    }
    return count;
}

int main() {
    cout << romanToInt("MCMXCIV");
}