#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;
unordered_map<int,vector<int> > mp;

void solve(int p, int c) {
  v[p] = c;   // set col
  for(auto x: mp[p]) { 
    if(v[x] == -1)  // if not visited
      solve(x, !c);   // change type
    else if(v[x] == v[p]){  // if same col1
      cout<<"NO";
      exit(0);
    }
  }
}

int main(){

  cin>>n>>m;
  v.resize(n+n, -1);
  int x, y;
  vector<pair<int,int > > path;
  for(int i = 0 ; i < m; i++) {
    cin>>x>>y;
    mp[x].push_back(y);
    mp[y].push_back(x);
    path.push_back({x, y});
  }

  solve(1, 0);
  cout<<"YES"<<endl;
  for(int i = 0; i <m; i++)
    cout<<(v[path[i].first] < v[path[i].second]);
  
  return 0;
}
