#include <bits/stdc++.h>
using namespace std;
 
 
int dp[20005],m;
bool v[20005];
 
int solve(int n){
  if(n<=0) return 9999999;
  if(n>=m) return dp[n] = n-m;
  if(v[n]) return dp[n];
  v[n] = 1;
  return dp[n] = min(solve(n-1), solve(n*2))+1;
}
 
int main(){
  int n;
  cin>>n>>m;
  memset(dp, 9999999, sizeof(dp));
  memset(v, false, sizeof(v));
  int ans = solve(n);
  cout<<ans;
  return 0;
}
