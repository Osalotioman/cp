/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<char> a;
    for(char v : s){
        if(v != '+'){
            a.push_back(v);
        }
    }
    sort(a.begin(), a.end());
    string r = "";
    for(int i=0; i<a.size(); ++i){
        if(i != a.size()-1){
            r += a[i];
            r += '+';
        }else{
            r += a[i];
        }
    }
    cout << r;
    return 0;
}