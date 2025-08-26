
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
        s+="1";
        int c =0 ;
        for(int i = 0; i < (int) s.size()-1; i++) 
            if(s[i] == '0' and s[i+1] == '1') c++;
        if(c>=3) cout<< 2<<endl;
        else cout<<c<<endl;
    }
};

int main() {
	fastread();
	Solution sol = Solution();
	int t;
	cin>>t;
	while(t--) {
		sol.run();
	}
	return 0;
}
