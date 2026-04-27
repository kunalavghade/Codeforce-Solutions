/*

    Author: kunalavghade
    Date: 27-04-2026
    
*/
#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return ;

    long long total_time = 0; 
    int current_pos = 1;

    for (int i = 0; i < m; ++i) {
        int target;
        cin >> target;
        
        if (target >= current_pos) 
            total_time += (target - current_pos);
        else 
            total_time += (n - current_pos) + target;
        
        current_pos = target;
    }

    cout << total_time << "\n";
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}