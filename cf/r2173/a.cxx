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
        int n, k, r = 0; 
        string s;
        cin >> n >> k >> s;
        for(int i=0; i<n; ++i){
            if(s[i] == '0'){
                ++r;
            }else{
                i += k;
            }
        }
        cout << r << '\n';
    }
    return 0;
}