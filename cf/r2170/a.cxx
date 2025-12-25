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
        int n; cin >> n;
        if(n == 1){
            cout << 1;
        }else if(n == 2){
            cout << 9;
        }else if(n == 3){
            cout << 29;
        }else{ 
            int v1 = n*n + (n*n) - 1 + (n*n) - 2 + (n*n) - n - 1;
            int v2 = (n*n) - 1 + (n*n) - n + (n*n) - n - 1 + (n*n) - n - 2 + (n*n) - 2*n -1;
            cout << (v1 > v2 ? v1 : v2);
        }
        cout << '\n';
    }
    return 0;
}