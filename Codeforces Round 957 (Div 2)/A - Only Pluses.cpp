#include<bits/stdc++.h>
using namespace std;

int a, b, c;

int ans = 0;

void solve(int a, int b, int c, int k) {
  ans = max(a*b*c, ans);
  if(k <= 0) return;


  for(int i = k; i > 0; i--) {
    solve(a+i, b, c, k-i);
    solve(a, b+i, c, k-i);
    solve(a, b, c+i, k-i);
  }
}

int main () {
  int t;
  cin>>t;
  while(t--) {
    cin>>a>>b>>c;
    solve(a, b, c, 5);
    cout<<ans<<endl;
    ans = 0;
  }
  return 0;
}
