/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char v){
    string vl = "aoyeui";
    for(char c : vl){
        if(v == c){
            return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, r = "";
    cin >> s;
    for(char &c : s){
        c = tolower(c);
        if(!isVowel(c)){
            r += '.';
            r += c;
        }
    }
    cout << r;
    return 0;
}