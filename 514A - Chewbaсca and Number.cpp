#include <bits/stdc++.h>
using namespace std;

string solve(string s) {

  for(int i = 0; i < s.size(); i++) {
    if(!i and s[i] == '9') continue;
    int num = s[i]-'0';
    s[i] = min(num, 9- num) + '0';
  }
  return s;
}

int main(){
  string n;
  cin>>n;
  string res = solve(n);
  cout<<res;
  return 0;
}
