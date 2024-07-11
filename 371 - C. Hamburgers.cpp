#include<bits/stdc++.h>
using namespace std;

typedef long long int ll; 

int nb, ns, nc;
int cb, cs, cc;
int pb, ps, pc;
ll r;

ll getPrice(ll x) {
  ll fb = max(x*cb-nb, (ll) 0);
  ll fs = max(x*cs-ns, (ll) 0);
  ll fc = max(x*cc-nc, (ll) 0);
  return fb*pb + fs*ps + fc*pc;
}


int main(){
  string s;
  cin>> s>>nb>>ns>>nc>>pb>>ps>>pc>>r;
  for(auto x: s) {
    if(x == 'B') cb++;
    else if(x == 'S') cs++;
    else cc++;
  }
  ll ans = 0, l = 0, h = r+1000, price = 0;
  // cout<<cb<< " "<<cs<< " "<<cc<<endl;
  // cout<<l << " "<<h<<endl;
  while(l <= h) {
    ll mid = l+(h-l)/2;
    // cout<<mid<< " ";
    ll price = getPrice(mid);
    // cout<<price<<endl;
    if(price == r){
      cout<<mid<<endl;
      exit(0);
    }
    else if(price > r) h = mid-1;
    else l = mid+1, ans=mid;
  }
  cout<<ans<<endl;
  return 0;
}
