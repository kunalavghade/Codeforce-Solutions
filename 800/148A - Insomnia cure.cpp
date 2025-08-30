#include <bits/stdc++.h>
using namespace std;    

void fillv(vector<bool>& a, int k) {
   for(int i = k; i < a.size(); i+=k) 
        a[i] = true;
}


void solve() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    
    vector<bool> v(d+1, 0);
    fillv(v, k);
    fillv(v, l);
    fillv(v, m);
    fillv(v, n);

    cout << count(v.begin(), v.end(), true) << '\n';

}
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

