#include <bits/stdc++.h>
using namespace std;

int main(){
  long long  n, k, x = 1;
  cin>>n>>k;
  if(k == 1) {
    cout<<n<<endl;
    return 0;
  }
  int c = 0;
  while(n) 
    n>>=1, c++;
  while (c--)
    x*=2;
  cout<<(x-1)<<endl;
  return 0;
}
