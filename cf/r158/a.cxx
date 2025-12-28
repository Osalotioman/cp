/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, r = 0;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; ++i){
      cin >> a[i];
    }
    --k;
    for(int v : a){
      r += v >= a[k] && v > 0;
    }
    cout << r;
    return 0;
}