#include <bits/stdc++.h>
using  namespace std;

int main () {
  int n;
  vector<int> v;
  cin>>n;
  v.resize(n);
  for(int i = 0; i < n; i++)
    cin>>v[i];

  int mask = 1<<n;
  for(int i = 0; i < mask; i++) {
    int sum = 0;
    for(int j = 0; j < n; j++) {
      if((1<<j)&i)
        sum += v[j];
      else 
        sum -= v[j];
    }
    if((abs(sum) % 360) == 0) {
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO";
   
  return 0;
}
