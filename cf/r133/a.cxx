/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string v = "HQ9", s;
    bool w = false;
    cin >> s;
    for(char k : v){
        if(count(s.begin(), s.end(), k)){
            w = true;
            break;
        }
    }
    cout << (w ? "YES" : "NO");
    return 0;
}