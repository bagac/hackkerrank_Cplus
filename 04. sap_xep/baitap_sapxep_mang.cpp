// 1 <= N <= 10^6;
// 1 < a[i] < 10^9
// cho 1 mảng số nguyên, in ra các phần tử trong mảng theo thứ tự tần suất xuất hiện
// giảm dần, nếu có nhiều số có cùng số lần xuất hiện thì số nào nhỏ hơn sẽ in ra trước
// 1. đếm tần suất (map)
// 2. chuyển các phần tử trong map ra vector pair 
// 3. viết comparator cho vector pair = > sort
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.first > b.first;
    return a.first < b.first;
}
int main(){

    int n; cin >> n;
    int a[n];
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<pair<int, int>> v;
    for(auto it : mp){
        v.push_back(it);
    }
    sort(begin(v), end(v), cmp);
    return 0;
}