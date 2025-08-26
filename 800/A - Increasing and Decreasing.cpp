
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, n;
    cin>>x>>y>>n;
    vector<int> ans(n);
    ans[0] = x, ans[n-1] = y;

    for(int i = n-2, j=1; i >= 1; i--, j++)
        ans[i] = ans[i+1] -j;
    
    int b = 0;
    for(int i = n-2; i>=0; i--) {
        if(ans[i+1]-ans[i] > b) b = ans[i+1] - ans[i];
        else {
            cout<<-1<<endl;
            return;
        }
    }

    for(int x: ans) 
        cout<<x<<" ";
    cout<<endl;
}

int main() {

    int n=1;
    cin>>n;
    while(n--) {
        solve();
    } 
    
    return 0;
}
