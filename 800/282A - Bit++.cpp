#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  cin>> n;
  string s;
  while(n--) {
    cin>>s;
      if( "--X" == s)
        --ans;
      else if( "X--" == s)
        ans--;
      else if( "++X" == s)
        ++ans;
      else if( "X++" == s)
        ans++; 
   }
  cout<<ans;
  return 0;
}
