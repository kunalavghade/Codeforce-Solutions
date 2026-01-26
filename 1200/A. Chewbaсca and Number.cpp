#include "bits/stdc++.h"
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    string s;
    cin>> s;
    if(s[0] != '9') {
        int d = s[0] - '0';
        s[0] = min(9-d, d) + '0';
    }
    for(int i = 1; i < s.size(); i++) {
        int d = s[i] - '0';
        s[i] = min(9-d, d) + '0';
    }
    cout<<s<<endl;
    
    return 0;
}