#include "bits/stdc++.h"
using namespace std;

void solveSpy() {
    int n, f1= 0, f2= 0, n1= -1, n2= -1, t, i = 1, idx1 = -1, idx2 = -1;
    cin >> n;
    while(n--) {
        cin >> t;
        if(t == n1) f1++;
        else if(t == n2) f2++;
        else if(n1 == -1) {
            n1 = t;
            f1++;
            idx1 = i;
        }
        else if(n2 == -1) {
            n2 = t;
            f2++;
            idx2 = i;  
        }
       
        i++;
    }
    // cout << n1 << " " << n2 << endl;
    // cout << f1 << " " << f2 << endl;
    // cout << idx1 << " " << idx2 << endl;
    if(f1 > f2) cout << idx2 << endl;
    else cout << idx1 << endl;
}

void solve() {
   int n;
   cin >> n;
   while(n--) {
    solveSpy();
   }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}