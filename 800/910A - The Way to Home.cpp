
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, d;
    cin>>n>>d;
    vector<int> dp(n, n+1) ;
    string s;
    cin>>s;

    dp[0] = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') {
            for(int j = i-d; j < i; j++) 
                if(j >= 0)
                dp[i] = min(dp[i], dp[j]+1);
        }
    }

 //   for(int x: dp) 
   //     cout<<x<<" ";

    cout<<(dp[n-1]  >= n+1 ? -1 : dp[n-1]);
}

int main() {

    int n=1;
    // cin>>n;
    while(n--) {
        solve();
    } 
    
    return 0;
}
