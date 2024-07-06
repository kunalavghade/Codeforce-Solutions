#include<bits/stdc++.h>
using namespace std;

int n, edges;
unordered_map<int,vector<int>> mp;
vector<bool> dir;

bool dfs(int i, bool clr) {
  dir[i] = clr;
  for(int x: mp[i]){
    if(dir[x] != -1)  {
      if(!dfs(x, !clr)) return 0;
    }
    else if(dir[i] == dir[x]) return 0;  
  }
  return 1;
}

int main(){

  cin>>n>>edges;
  dir.resize(n, -1);
  int s,e; 
  vector<vector<int>> ip(edges);
  for(int i = 0; i < edges; i++) {
    cin>>s>>e;
    mp[s].push_back(e);
    mp[e].push_back(s);
    ip.push_back({s, e});
  }

  if(!dfs(1, 0)) {
    cout<<"NO"<<endl;
  
  }else {
  
  cout<<"YES"<<endl;
  for(auto x: ip) {
    cout<<(dir[x[0]]< dir[x[1]])<<endl;
  }
  }
  
  return 0;
}
