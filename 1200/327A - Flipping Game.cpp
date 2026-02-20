#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int totalOnes = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) totalOnes++;
    }

    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i = 0; i < n; i++) {
        // transform
        int value = (a[i] == 0) ? 1 : -1;

        currentSum = max(value, currentSum + value);
        maxSum = max(maxSum, currentSum);
    }

    cout << totalOnes + maxSum << endl;

    return 0;
}