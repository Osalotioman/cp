/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    while(k--){
        string s = to_string(n);
        if(s[s.size() - 1] == '0'){
            n /= 10;
        }else{
            --n;
        }
    }
    cout << n;
    return 0;
}