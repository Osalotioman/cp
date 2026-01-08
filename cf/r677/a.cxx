/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h, r;
    cin >> n >> h;
    r = n;
    for(int i=0; i<n; ++i){
        int x;
        cin >> x;
        if(x > h){
            ++r;
        }
    }
    cout << r;
    return 0;
}