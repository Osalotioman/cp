/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r = 0;
    string s; 
    cin >> s;
    for(char v : s){
      if(v == '4' || v == '7'){
        ++r;
      }
    }
    cout << ((r == 4 || r == 7) ? "YES" : "NO");
    return 0;
}