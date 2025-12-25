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
        int n, a; 
        cin >> n >> a;
        vector<int> v(n);
        for(int i=0; i<n; ++i){
            cin >> v[i];
        }

    }
    return 0;
}

/* 
Problem: https://codeforces.com/problemset/problem/2169/A
Notes:
1, 2, 3, 4, 5, 6, 7
if abs(a-1) >= abs(b-1) alice gets the point.
*/