//
// Created by chava on 29/05/25.
//

#include <iostream>
#include <string>

using namespace std;

bool isValid (string s) {

    for(int i = 0; i < s.length(); i ++){
        char *ptr1 = &s[i];
        for (int j = i + 1; j < s.length() - 1; j++) {
            char *ptr2 = &s[j];
            int a = 0, b = 0, c = 0;
            if (*ptr1 == '(' && (*ptr2 != '(' && *ptr2 != ')') && j != s.length()) {
                ptr2++;
                a++;
            } else if (*ptr1 == '(' && *ptr2 == ')' && a % 2 != 0) {
                return false;
            } else if (*ptr1 == '(' && *ptr2 == '('){
                return false;
            } else {
                return false;
            }

            if (*ptr1 == '[' && (*ptr2 != '[' && *ptr2 != ']')) {
                ptr2++;
                b++;
            } else if (*ptr1 == '[' && *ptr2 == ']' && b % 2 != 0) {
                return false;
            } else if (*ptr1 == '[' && *ptr2 == '['){
                return false;
            } else {
                return false;
            }

            if (*ptr1 == '{' && (*ptr2 != '{' && *ptr2 != '}')) {
                ptr2++;
                c++;
            } else if (*ptr1 == '{' && *ptr2 == '}' && c % 2 != 0) {
                return false;
            } else if (*ptr1 == '{' && *ptr2 == '{'){
                return false;
            } else {
                return false;
            }
        }
    }
    return true;
}

int main (){
    cout << isValid("(]");
}