#include <bits/stdc++.h>
using namespace std;    

void getCandies() {
    int n;
    cin>>n;

    int sum = 0, min = INT_MAX;
    for(int i=0, x; i<n; i++) {
        cin>>x;
        sum += x;
        if(x < min) 
            min = x;
    }
    cout << sum - min*n << "\n";
}

void solve() {
    int n;
    cin>>n;
    while(n--) {
        getCandies();
    }
}
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

