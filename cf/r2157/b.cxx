/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, x, y;
        string s;
        cin >> n >> x >> y >> s;
        if(abs(x) > n || abs(y) > n){
            cout << "NO";
        }else{
            // Count 4's
            int fc = 0, xy = abs(abs(x) - abs(y));
            for(char v : s){if(v == '4'){++fc;}}
            if(fc > 0 && (abs(x) > n-1 || abs(y) > n-1)){
                cout << "NO";
            }else{
                cout << "YES";
            }
        }
        cout << '\n';
    }
    return 0;
}