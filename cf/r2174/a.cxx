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
        unsigned long long n; cin >> n;
        vector<unsigned long long> a(n);
        for(unsigned long long i=0; i<n; ++i){
            cin >> a[i];
        }
        unsigned long long mod = pow(10, 18);
        cout << a[(mod) % n] << '\n';
    }
    return 0;
}