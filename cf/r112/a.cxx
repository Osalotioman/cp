/*
    author: Osalotioman
*/

#include <bits/stdc++.h>
using namespace std;

void normalize_case(string &v){
    for(char &c : v){
        c = tolower(c);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    normalize_case(a);
    normalize_case(b);
    for(int i=0; i<a.size(); ++i){
        if(a == b){
            cout << 0;
            break;
        }else if(a[i] < b[i]){
            cout << -1;
            break;
        }else if(a[i] > b[i]){
            cout << 1;
            break;
        }
    }
    return 0;
}