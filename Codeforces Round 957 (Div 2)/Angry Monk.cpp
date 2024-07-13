#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> v;

void solve(int n, int k){
  int ans = 0;
  sort(begin(v),end(v));
  for(int i = 0; i < k-1; i++) {
    ans+= v[i] *2-1;
  }  
  cout<<ans<<endl;
}

int main(){
  int t;
  cin>>t;

  while(t--) {
    cin>>n>>k;
    v.resize(k);
    for(int i = 0; i < k; i++)
      cin>>v[i];
    solve(n, k);
  }

  return 0;
}
