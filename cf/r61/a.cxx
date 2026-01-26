/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b, r = "";
    cin >> a >> b;
    for(int i=0; i<a.size(); ++i){
        r += ((a[i] - '0') ^ (b[i] - '0')) + '0';
    }
    cout << r;
    return 0;
}