
#include<bits/stdc++.h>
using namespace std;

void solve() {
}

int main() {
    int n , m;
    cin>>n>>m;
    int t = 4*60 - m;
    int l = 0, r = n; 
    int ans =0;    
    while(l <= r) {
        int m = l + (r-l)/2;
        int c = ((m*(m+1))/2)*5;
        // cout<<c<<" "<<t<<" "<<m<<endl;
        if(c <= t) {
            ans = m;
            l = m+1;
        }
        else 
            r = m-1;
    }
    cout<<ans;

    return 0;
}
