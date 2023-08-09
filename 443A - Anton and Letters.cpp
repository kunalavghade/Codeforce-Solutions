#include<bits/stdc++.h>
using namespace std;

void solve() {
}

int main() {

    int ans = 0;
    string s;
    getline(cin, s);
    int arr[26] = {};
    for(auto c: s) {
        if(c>='a' and c<='z')
        arr[c-'a'] = 1;
    }

    for(int i = 0; i < 26; i++) 
        ans +=  arr[i];

    cout<<ans;
    return 0;
}
