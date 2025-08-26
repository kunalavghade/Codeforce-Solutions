
#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));


class Solution{
    int solve(int n) {
        set<int> s;
        for(int i = 0; i< 4; i++){
            int c = n % 10;
            if(s.count(c)) return 0;
            s.insert(c);
            n /=10;
        }
        return 1;
    }
public: 
    void run() {
        int n;
        cin>>n;
        int ans = n+1;
        for(int i = n+1; i< 10000;  i++)
            if(solve(i)) {
                ans = i;
                break;
            }
        cout<<ans;
    }
};

int main() {
	fastread();
	Solution sol = Solution();
	int t = 1;
	// cin>>t;
	while(t--) {
		sol.run();
	}
	return 0;
}
