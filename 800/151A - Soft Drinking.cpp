#include <bits/stdc++.h>
using namespace std;

int main() {
  int  n, k, l, c, d, p, nl, np;
  cin>> n >> k>> l>> c>> d>> p>> nl>> np;
  int ans = min({((k*l)/(n*nl)),(c*d)/n,(p/(n*np))});
  cout<<ans;
  return 0;
}
