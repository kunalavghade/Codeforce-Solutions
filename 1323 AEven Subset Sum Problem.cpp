#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));


class Solution{
public: 
    void run() {
        int a, b, ans =0;
        cin>>a>>b;
        while(a<=b){ 
            a *= 3, b *= 2, ans++; 
            if(a>b) break;
        }
        cout<<ans;
    }
};

int main() {
	fastread();
	Solution sol = Solution();
	int t=1;
	//cin>>t;
	while(t--) {
		sol.run();
	}
	return 0;
}
