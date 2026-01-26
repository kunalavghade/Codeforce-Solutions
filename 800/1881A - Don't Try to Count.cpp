#include "bits/stdc++.h"
using namespace std;

bool isSubstring(const string &s1, const string &s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    for (int i = 0; i <= len1 - len2; ++i) 
        if (s1.substr(i, len2) == s2) 
            return true;

    return false;
}

int solve() {
    int n1 , n2;
    string s1, s2;
    cin >> n1 >> n2;
    cin >> s1 >> s2;

    for(int i = 0; i <= 5; i++) {
        if(isSubstring(s1, s2)) 
            return i;
        s1 += s1;
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;
    while(n-- ) {
       int ans = solve();
       cout<< ans << "\n";
    }
    
    return 0;
}