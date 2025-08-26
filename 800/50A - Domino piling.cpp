
#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));


class Solution{
public: 
    void run() {
        int a, b;
        cin>>a>>b;
        cout<<((a*b)/2);
    }
};

int main() {
	fastread();
	Solution sol = Solution();
	int t;
	//cin>>t;
    t = 1;
	while(t--) {
		sol.run();
	}
	return 0;
}
