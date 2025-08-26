#include<bits/stdc++.h>
using namespace std;

int solve(string &s, int n) {
  int ans = 0, i = 0, f = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == '1') f= 1;
    if(f == 1 and s[i-1] != s[i]) 
      ans++;
    
  }
  return ans ? ans-1 : ans;
}

int main(){
  int t, n;
  string s;
  cin>>t;
  while(t--){
    cin>>n>>s;
    int ans = solve(s, n);
    cout<<ans<<endl;
  }
  return 0;
}
