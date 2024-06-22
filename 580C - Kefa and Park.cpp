#include<bits/stdc++.h>
using namespace std;


int n, m;
vector<bool> b; 
unordered_map<int,vector<int>> mp;
vector<bool> v;

int solve(int c, int cnt){
  if(v[c-1]) return 0;
  v[c-1] = 1;
  int upd = b[c-1] ? cnt-1: m;
  if(upd < 0) return 0;
  if(mp[c].size()==1 && c!=1) return 1;
  int ans = 0;
  for(auto x: mp[c])
    ans += solve(x, upd);
  return ans;
}

int main(){
  cin>>n>>m;
  for(int i = 0; i < n; i++) {
    bool c;
    cin>>c;
    b.push_back(c);
  }
  for(int i = 0; i < n-1; i++) {
    int s, e;
    cin>>s>>e;
    mp[s].push_back(e);
    mp[e].push_back(s);
  }
  v.resize(n, 0);

  int ans = solve(1, m);
  
  cout<<ans;
  
  return 0;
}
