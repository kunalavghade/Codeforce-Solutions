#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a, b, c;

    while(n--){
        cin >> a >> b >> c;
        if(a < b and b < c) 
            cout << "STAIR" << "\n";
        else if(a < b and b > c) 
            cout << "PEAK" << "\n";
        else 
            cout << "NONE" << "\n";
    }


}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}