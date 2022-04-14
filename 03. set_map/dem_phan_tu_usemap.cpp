// Cho mảng A[] gồm N phần tử. Bạn được yêu cầu trả lời cho các truy vấn, mỗi truy vấn yêu cầu bạn đếm các số các giá trị khác nhau từ chỉ số L tới chỉ số N - 1.

// Input Format

// Dòng đầu tiên là N - số lượng phần tử của mảng; Dòng thứ 2 gồm N phần tử A[i] của mảng; Dòng thứ 3 là số truy vấn Q; Q dòng tiếp theo mỗi dòng là một số L.

// Constraints

// 1<=N<=1000000; 1<=A[i]<=10^9; 1<=Q<=10000; 0<=L<=N-1;

// Output Format

// Với mỗi truy vấn in kết quả trên 1 dòng.

// Sample Input 0

// 9
// 3 3 3 4 2 0 3 1 2 
// 4
// 8
// 6
// 1
// 7
// Sample Output 0

// 1
// 3
// 5
// 2

#include <bits/stdc++.h>
#include <map>

using namespace std;
using ll = long long;

void count_L(int n, int y, vector<ll> ai, map<ll, int> pt, vector<int> &result){
    if(y == n-1) result.push_back(1);
    else{
        int sum_pt = 0;
        for( int i = y; i < n; i++){
            sum_pt += pt[ai[i]];
            pt.erase(ai[i]);
        }
        result.push_back(sum_pt);
    }
}
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout  
    map<ll, int> mp;
    vector<ll> input_ai;
    vector<int> result_cnt;
    ll n; cin >> n;
    for ( ll i = 0; i < n; i++){
        ll x; cin >> x;
        input_ai.push_back(x);
        mp.insert({x,1});
    }
    int q; cin >> q;
    while(q){
        int y; cin >> y;
        q--;
        count_L(n, y, input_ai, mp, result_cnt);
    }
    for( int i = 0; i < result_cnt.size(); i++){
        cout << result_cnt[i] << endl;
    }
    return 0;
}