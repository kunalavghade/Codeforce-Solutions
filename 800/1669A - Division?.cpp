#include "bits/stdc++.h"
using namespace std;


void solve() {
    int n, score;
    cin >> n;

    while(n--) {
        cin >> score;
        if(score >= 1900) {
            cout << "Division 1" << endl;
        }else if(score >= 1600) {
            cout << "Division 2" << endl;
        }else if(score >= 1400) {
            cout << "Division 3" << endl;
        }else {
            cout << "Division 4" << endl;
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}