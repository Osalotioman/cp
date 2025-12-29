/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d = 1, r = 0; 
    string s;
    cin >> n >> s;
    for(int i=1; i<n; ++i){
        if(s[i] == s[i-1]){
            ++d;
        }else{
            r += d - 1;
            d = 1;
        }
    }
    r += d-1;
    cout << r;
    return 0;
}