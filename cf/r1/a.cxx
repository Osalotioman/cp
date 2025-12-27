/*
    author: Osalotioman
*/
#include <bits/stdc++.h>
using namespace std;

long long ceil1(long long a, long long b){
    if(a < 1){
        return 0;
    }else if(a % b == 0){
        return a/b;
    }else{
        return ((a - (a%b)) / b) + 1;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, m, a;
    cin >> n >> m >> a;
    cout << ceil1(n, a) + (ceil1(n, a) * ceil1(m-a, a));
    return 0;
}

/* Idea:
    test: 6 6 4
    6 * 6 = 36
    4 * 4 = 16
    My idea is to first place flagstones along n, then place flagstones along (m-a), m-a since the 
    flagstones initially placed along n will take out a length of a from m.
    Check:
    Along n:   6 - 4 = 2 - 4 = -2 (stop, 2 flagstones needed)
    Along m-a: (6-4 = 2) - 4 = -2 (stop, 1 flagstone needed)
    (Along n) * (Along m-a): 2 * 1 = 2 - from observation
    Total Flagstones: Along n + [(Along n) * (Along m-a)]
*/