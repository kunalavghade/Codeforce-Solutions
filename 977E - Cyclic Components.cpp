#include<bits/stdc++.h>
using namespace std;

unordered_map<int,vector<int>> mp;
vector<bool> v;
int n, m, ans = 0;

void mark(int i) {
  v[i-1] = 1;
  for(int x: mp[i])
    if(!v[x-1])
      mark(x);
}

int main(){
  cin>>n>>m;
  v.resize(n, 0);
  int s, e;
  for(int i = 0; i < m; i++) {
    cin>>s>>e;
    mp[s].push_back(e);
    mp[e].push_back(s);
  }
  for(int i = 1; i <= n; i++) 
    if(!v[i-1] && mp[i].size()!=2)
      mark(i);

  for(int i = 1; i <= n; i++) 
    if(!v[i-1])
      ans++, mark(i);

  cout<<ans;

  return 0;
}
