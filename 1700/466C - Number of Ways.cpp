#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    long long total = accumulate(a.begin(), a.end(), 0LL);
    
    if(total % 3 != 0){
        cout << 0 << endl;
        return;
    }
    
    long long part = total / 3;
    long long prefix = 0;
    long long countPart = 0;
    long long ans = 0;
    
    for(int i = 0; i < n-1; i++){   // stop before last index
        prefix += a[i];
        
        if(prefix == 2 * part)
            ans += countPart;
        
        if(prefix == part)
            countPart++;
    }
    
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}