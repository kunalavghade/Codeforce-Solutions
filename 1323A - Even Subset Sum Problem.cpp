#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];

    vector<int> ans;
    for(int i = 0; i < n; i++) {
        if(a[i]%2 == 0){
            cout<<1<<endl<<(i+1)<<endl;
            return;
        }
        else {
            ans.push_back(i);
            if(ans.size()>=2){
                cout<<2<<endl<<(ans[0]+1)<<" "<<(ans[1]+1)<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
}

int main() {

    int n=1;
    cin>>n;
    while(n--) {
        solve();
    } 
    
    return 0;
}
