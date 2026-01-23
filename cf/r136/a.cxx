/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> p(n);
    map<int, int> v;
    for(int i=0; i<n; ++i){
        cin >> p[i];
        v[p[i]] = i+1;
    }
    for(int i=1; i<n+1; ++i){
        cout << v[i] << " ";
    }
    return 0;
}