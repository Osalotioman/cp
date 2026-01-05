/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k = 1;
    bool w = false;
    string s;
    cin >> s;
    for(int i=1; i<s.size(); ++i){
        if(s[i] == s[i-1]){
            ++k;
        }else{
            k = 1;
        }
        if(k > 6){
            cout << "YES";
            w = true;
            break;
        }
    }
    if(!w){
        cout << "NO";
    }
    return 0;
}