//
// Created by chava on 26/09/23.
//
#include <iostream>
#include <string>
#include <hash_map>

using namespace std;

bool uniqueChar(string str){
    if (str.length() > 128) return false;
    bool charSet[128] = {};
    for (int i = 0; i < str.length(); ++i) {
        int charVal = (int) str[i];
        if (charSet[charVal]) return false;
        charSet[charVal]= true;
    }
    return true;
}

int main(){
    string str = "hola";
    cout << uniqueChar(str);
    return 0;
}