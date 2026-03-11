#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string,int>> rounds;
    map<string,int> total;

    for(int i=0;i<n;i++){
        string name;
        int score;
        cin >> name >> score;

        rounds.push_back({name, score});
        total[name] += score;
    }

    int mx = INT_MIN;
    for(auto &p : total)
        mx = max(mx, p.second);

    map<string,int> running;

    for(auto &r : rounds){
        string name = r.first;
        int score = r.second;

        running[name] += score;

        if(running[name] >= mx && total[name] == mx){
            cout << name << endl;
            return 0;
        }
    }
}