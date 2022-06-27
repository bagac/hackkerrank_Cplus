#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;

bool cmp_01(pair <int, int> a, pair <int, int> b){
    if(a.second != b.second) return a.second > b.second;
    else return a.first < b.first;
}

bool cmp_02(pair <int, pair<int, int>> a, pair <int, pair<int, int>> b){
    return a.second.first > b.second.first;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; cin >> n;
    map <int, int> mp;
    vector<int> input;
    for( int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
        input.push_back(x);
    }
    vector<pair<int, pair<int,int>>> vt_cmp02;
    for( int i = 0; i < n; i++){
        vt_cmp02.push_back({input[i],{mp[input[i]],i}});
    }
    for(auto x:vt_cmp02) cout << x.first << " " << x.second.first << " " << x.second.second << endl;
    vector<pair <int, int>> pr;
    for( auto it = mp.begin(); it != mp.end(); it++){
        pr.push_back(*it);
    }
    sort(begin(pr), end(pr), cmp_01);
    for(auto x:pr) 
        for(int i = 0; i < x.second; i++) cout << x.first << " ";
    cout << endl;
    stable_sort(begin(vt_cmp02), end(vt_cmp02), cmp_02);
    for(auto x:vt_cmp02) 
        while(mp[x.first] != 0){
            cout << x.first << " ";
            mp[x.first]--;
        }
    return 0;
}
