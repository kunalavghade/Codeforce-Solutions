#include<bits/stdc++.h>
using namespace std;

int  main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int n;
  cin >> n;  

  int ans = (n / 5) + !!(n%5);
  cout << ans << endl;
  return 0;
}