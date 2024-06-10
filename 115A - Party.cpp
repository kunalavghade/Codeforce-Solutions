#include <bits/stdc++.h>
using namespace std;

int s, t, minGrps;
vector<int> managers;
unordered_map<int, vector<int>> G;


void dfs(int manager, int grp) {
  minGrps = max(minGrps, grp);
  for(auto emp: G[manager]) 
    dfs(emp, grp+1);
}

int main(){
  cin>>s;
  for(int i = 1; i <= s; i++) {
    cin>>t;
    if(t == -1) managers.push_back(i);
    else G[t].push_back(i);
  }
  minGrps = 1;
  for(int manager: managers) 
    dfs(manager, 1);
  cout<<minGrps;
  return 0;
}
