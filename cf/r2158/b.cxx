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
        int n, et, ot; cin >> n;
        n *= 2;
        vector<int> a(n), e, o;
        map<int, int> f;
        for(int i=0; i<n; ++i){
            cin >> a[i];
            ++f[a[i]];
        }
        /* 
            for(auto v : f){
                cout << v.first << " : " << v.second << "\n";
            }
        */
        for(auto v : f){
            if(v.second % 2 == 1){
                o.push_back(v.second);
                ot += v.second;
            }else{
                e.push_back(v.second);
                et += v.second;
            }
        }
        int nh = n/2, e1 = 0, o1 = 0;
        for(int i=0; i<n; ++i){
            // I am taking the stuff from
            
        }
    }
    return 0;
}