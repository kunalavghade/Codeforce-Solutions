#include<bits/stdc++.h>
using namespace std;

unordered_map<int,vector<int>> mp;
stack<int> st;
vector<int> v;


void dfs(int p) {
   if(v[p] == 1) { // got cycle
    cout<<"Impossible"<<endl; exit(0);
  }
  if(!v[p]) {
    v[p]++;  // mark visited
    for(int x: mp[p]) 
      dfs(x); 
    v[p]++;  // mark visited completed
    st.push(p);
  }
}

int main(){
  int n; string s, p;
  cin>>n;
  bool ok = 1;
  while(n--){
    ok = 0;
    cin>>s;
    int m = min(s.size(), p.size());
    if(!m){
      p = s;
      continue;
    }
    for(int i = 0; i < m; i++) {    
      if(s[i] != p[i]) {
        ok = 1;
        mp[p[i]-'a'].push_back(s[i]-'a'); // mismatch add to graph
        break;
      }
    }
    if(!ok && (s.size() < p.size())) {
      cout<<"Impossible"<<endl; exit(0);
    }
    p = s;
  }

  v.resize(26, 0);
  
  for(int i = 0; i < 26; i++)
    if(!v[i]) dfs(i);


  while(!st.empty()) {
    cout<<(char)(st.top()+'a');
    st.pop();
  }

  return 0;
}
