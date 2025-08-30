#include <bits/stdc++.h>
using namespace std;    


void solve() {
    int m, n;
    cin>> m >> n;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
           if((i&1) == 0 || (j == 0 &&( (i+1) % 4 == 0)) || (j == n-1 &&( (i-1) % 4 == 0))) 
                cout<< '#';
            else
                cout<< '.';
        }
        cout<< "\n";
    }
}
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

