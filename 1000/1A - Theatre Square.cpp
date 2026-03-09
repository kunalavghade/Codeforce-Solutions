#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b>> c;
    long long w = (a+c-1)/c;
    long long h = (b+c-1)/c;
    cout << w*h;
    return 0;
}