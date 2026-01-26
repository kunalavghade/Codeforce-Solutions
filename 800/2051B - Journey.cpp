#include "bits/stdc++.h"
using namespace std;


int solve() {
    int n, a, b , c;
    cin >> n >> a >> b >> c;
    long long sum = a + b + c;
    long long ans = (n / sum) * 3;
    n = n % sum;
    // cout<<ans << " " <<n<<" |";
    if(n > 0 ) 
        ans++, n -= a;
    //  cout<<ans << " " <<n<<" |";
    if(n > 0) 
        ans++, n -= b;
    //  cout<<ans << " " <<n<<" |";
    if(n > 0) 
        ans++, n -= c;
    //  cout<<ans << " " <<n<<" |";

    return (int) ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n = 1;
    cin >> n;
    while(n-- ) {
       int ans = solve();
       cout<< ans << "\n";
    }
    
    return 0;
}