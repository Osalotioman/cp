/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x = 0, y = 0, z = 0; 
    cin >> n;
    while(n--){
        int i, j, k;
        cin >> i >> j >> k;
        x += i;
        y += j;
        z += k;
    }
    cout << ((x==0 && y==0 && z==0) ? "YES" : "NO");
    return 0;
}