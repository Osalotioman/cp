/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        int yc = 0;
        for(char v : s){
            if(v == 'Y'){
                ++yc;
            }
        }
        cout << ( yc < 2 ? "YES\n" : "NO\n");
    }
    return 0;
}