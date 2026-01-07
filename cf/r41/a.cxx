/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    reverse(b.begin(), b.end());
    cout << (a == b ? "YES" : "NO");
    return 0;
}