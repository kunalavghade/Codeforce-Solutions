#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, ans = 0, x, t, pre = -1;
  cin>>n>>x; 
  while(n--) {
    cin>>t;
    if(x-->0 && t>0) 
      pre = t;
    else if(pre != t)
      continue;
    ans++;
  }
  cout<<ans<<endl;
  return 0;
}
