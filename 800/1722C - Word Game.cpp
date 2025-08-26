
#include<bits/stdc++.h>
using namespace std;

void solve() {
    unordered_map<int, vector<string>> mp;
    unordered_map<string, int> m;
    int n, t;
    cin>>n;
    string s;
    for(int i = 1; i <= 3; i++) {
        t = n;
        while(t--) {
            cin>>s;
            mp[i].push_back(s);
            m[s]++;
        }
    }
    for(int i = 1; i <= 3; i++) {
        int ans = 0;
        for(auto y : mp[i]){
            if(m[y] == 1) ans+=3;
            else if(m[y] == 2) ans+=1;
        }
        cout<<ans<<" ";
    }
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
