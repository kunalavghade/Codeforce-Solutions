#include "bits/stdc++.h"
using namespace std;

int prefreq[256];

void preCal(){
    fill(prefreq, prefreq+256, 0);
    string s = "Timur";
    for(char c: s){
        prefreq[c]++;
    }
}

void check(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int freq[256];
    fill(freq, freq+256, 0);
    for(char c: s){
        freq[c]++;
    }

    for(int i = 0; i < 256; i++){
        if(freq[i] != prefreq[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

void solve() {
    preCal();
    int n;
    cin >> n;

    while(n--){
        check();
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}