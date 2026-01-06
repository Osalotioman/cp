/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, r = 0;
    string s;
    cin >> n >> s;
    for(char v : s){
        if(v == 'A'){
            ++r;
        }
    }
    cout << (r > s.size()-r ? "Anton" : r < s.size()-r ? "Danik" : "Friendship");
    return 0;
}