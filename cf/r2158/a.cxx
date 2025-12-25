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
        int n, y, r;
        cin >> n >> y >> r;
        if(y % 2 == 1){--y;}
        r += y/2;
        cout << (r > n ? n : r) << '\n';
    }
    return 0;
}