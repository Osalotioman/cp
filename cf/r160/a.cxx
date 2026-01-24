/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t = 0;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i){
        cin >> a[i];
        t += a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int m = 0, c = 0;
    for(int i=0; i<n; ++i){
        ++c;
        m += a[i];
        if(m > t-m){
            break;
        }
    }
    cout << c;
    return 0;
}