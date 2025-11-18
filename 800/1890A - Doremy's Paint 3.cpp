#include "bits/stdc++.h"
using namespace std;

int solve() {
    int n ;
    cin >> n ;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int n1 = -1 , n2 = -1, n1c = 0, n2c = 0; 
    for(int i = 0; i < n; i++) {
        if(n1 == arr[i]) n1c++;
        else if(n2 == arr[i]) n2c++;
        else if(n1 == -1) n1 = arr[i];
        else if(n2 == -1) n2 = arr[i];
        else return 0;
    }
    // cout<< n1c << " " << n2c << "\n";

    return (abs(n1c - n2c) <= 1) || n2 == -1 ? 1 : 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;
    while(n-- ) {
       int ans = solve();
        if(ans == 1) 
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    
    return 0;
}