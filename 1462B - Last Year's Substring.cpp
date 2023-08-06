
#include<bits/stdc++.h>
using namespace std;


bool solve(string &s, string t) {
    if(t.size() > s.size()) return 0;
    int n = s.size(); 

//    cout<<(s.substr(0,1)+s.substr(n-4, 4))<<endl;
    if(s.substr(0,4) == t || s.substr(n-4, 4) == t) return 1;
    if(s.substr(0,1)+s.substr(n-3, 3) == t) return 1;
    if(s.substr(0,2)+s.substr(n-2, 2) == t) return 1;
    if(s.substr(0,3)+s.substr(n-1, 1) == t) return 1;

    return 0;
}

void solve() {
    int n;
    string s;
    cin>>n>>s;
    if(solve(s, "2020"))
        cout<<"YES";
    else cout<<"NO";
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
