#include "bits/stdc++.h"
using namespace std;

vector<int> calc;


void buildCalc(){
    int c = 1;
    while(calc.size() < 1000) {
        while(((c % 3) == 0) || ((c % 10) == 3)) c++;
        calc.push_back(c);
        c++;
    }
}

void solve() {
    buildCalc();
    int n, t;
    cin >> n;
    while(n--) {
        cin >> t;
        cout << calc[t-1] << "\n";
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}