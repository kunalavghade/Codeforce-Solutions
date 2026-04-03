/*

    Author: kunalavghade
    Date: 03-04-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    priority_queue<pair<int, int>> pq;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push({x, 1});
    }
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push({x, 2});
    }

    long long sum = 0;
    while(n > 0) {
        auto [x, y] = pq.top();
        pq.pop();
        if(y == 1 || k-- > 0) 
            sum += x, n--;
       
    }
    cout << sum << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}