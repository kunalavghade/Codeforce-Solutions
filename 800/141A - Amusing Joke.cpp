#include <bits/stdc++.h>
using namespace std;    



void solve() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int arr1[26] = {0};

    for(auto x: s1) 
        arr1[x - 'A']++;
    for(auto x: s2) 
        arr1[x - 'A']++;
    for(auto x: s3) 
        arr1[x - 'A']--;

    for (int i = 0; i < 26; i++)
        if(arr1[i] != 0) {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";   
}
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

