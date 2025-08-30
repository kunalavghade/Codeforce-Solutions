#include <bits/stdc++.h>
using namespace std;    


void solveRound() {
    int n; 
    cin >> n;

    vector<int> A;
    int pow = 1;
    while(n) {
        int r = n % 10;
        if(r) A.push_back(r * pow);
        n /= 10;
        pow *= 10;
    }
    cout << A.size() << "\n";
    for(auto x: A)
        if(x) cout << x << " ";
    cout << "\n";
}


void solve() {
   int n;
   cin>> n;
   while(n--) {
     solveRound();
   }
}
   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}

