#include <bits/stdc++.h>
using namespace std;

#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));


class Solution{
public: 
    void run() {
        string s;
        cin>>s;
        stack<char> st;
        int ans = 0;
        for(auto x: s) {
            if(st.empty() || st.top()!=x)
                st.push(x);
            else {
                st.pop();
                st.push(x);
                ans++;
            }
        }
        cout<<ans;
    }
};

int main() {
	fastread();
	Solution sol = Solution();
	int t =1,a;
	cin>>a;
	while(t--) {
		sol.run();
	}
	return 0;
}
