#include "bits/stdc++.h"
using namespace std;

int solve() {
    int n , target;
    cin >> n >> target;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MIN;
    ans = max(ans, arr[0]);
    ans = max(ans, 2 * (target - arr[n-1]));

    for(int i = 0; i < n -1; i++) 
        ans = max(ans, arr[i+1] - arr[i]);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;
    while(n-- ) {
       int ans = solve();
       cout<< ans << "\n";
    }
    
    return 0;
}