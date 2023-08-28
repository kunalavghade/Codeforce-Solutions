
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int  n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    for(int i = 1; i < n-1; i++) {
        int l = i-1, r = i+1;
        while(l >= 0 and arr[l]>arr[i]) l--;
        while(r < n and arr[r]>arr[i]) r++; 
        if(i >= 0 and r < n and arr[l] < arr[i] and arr[r]< arr[i]) {
            cout<<"YES"<<endl<<l+1<<" "<<i+1<<" "<<r+1<<endl;
            return;
        }
//        cout<<l<<" "<<i<<" "<<r<<endl;
    }
    cout<<"NO"<<endl;
}

int main() {

    int n=1;
    cin>>n;
    while(n--) {
        solve();
    } 
    
    return 0;
}
