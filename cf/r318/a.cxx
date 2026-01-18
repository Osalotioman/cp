/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    if(n % 2 == 0){
        // even and odd are equal number of terms
        n /= 2;
        if(k > n){
            k -= n;
            cout << 2*k;
        }else{
            cout << 2*k - 1;
        }
    }else{
        // one more odd number than even numbers
        n = (n-1)/2;
        if(k > n + 1){
            k -= n+1;
            cout << 2*k;
        }else{
            cout << 2*k - 1;
        }
    }
    return 0;
}