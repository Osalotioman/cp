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
        int n; 
        cin >> n;
        if(n % 2 == 1){
            cout << 0 << '\n';
        }else{
            int r = 0;
            int a = 0, b = 0;
            for(int i=0; i<n; ++i){              
                if(2*i < n+1){
                    for(int j = 0; j<n; ++j){
                        if(2*i + 4*j == n){
                            ++r;
                        }
                    }
                }
            }
            cout << r << '\n';
        }
        // 2(i) + 4(n-i) = n
    }
    return 0;
}