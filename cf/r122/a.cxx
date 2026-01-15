/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n){
    string s = to_string(n);
    for(char v : s){
        if(v != '7' && v != '4'){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    bool w = false;
    cin >> n;
    for(int i=4; i<1000; ++i){
        if(isLucky(i)){
            if(n % i == 0){
                cout << "YES";
                w = true;
                break;
            }
        }
    }
    if(!w){
        cout << "NO";
    }
    return 0;
}