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
        int n, r = 0, rt = 1; 
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(int i=1; i<n; ++i){
            if(a[i] == a[i-1]){
                ++rt;
            }else{
                if(a[i-1] > rt){
                    r += rt;
                }else if(a[i-1] < rt){
                    r += rt - a[i-1];
                }
                rt = 1;
            }
        }
        if(a[n-1] > rt){
            r += rt;
        }else if(a[n-1] < rt){
            r += rt - a[n-1];
        }
        cout << r << '\n';
    }
    return 0;
}