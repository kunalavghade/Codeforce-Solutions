#include <bits/stdc++.h>
using namespace std;    


void solve() {
    int n, c;
    cin>> n >> c;
    
    for(int i = 1; i <= 10; i++) {
       int price = n * i;
       if(price % 10 == c || price % 10 == 0) {
            cout<< i << "\n";
            return;
       }
    }
    cout<<10<<"\n";
}
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

