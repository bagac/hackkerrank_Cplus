// Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự tăng dần, sau đó sắp xếp các phần tử theo thứ tự giảm dần.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^5; -10^9<=A[i]<=10^9

// Output Format

// Dòng đầu tiên in ra các phần tử trong mảng theo thứ tự tăng dần. Dòng thứ 2 in ra các phần tử trong mảng theo thứ tự giảm dần.

// Sample Input 0

// 5
// 1 4 2 5 3
// Sample Output 0

// 1 2 3 4 5
// 5 4 3 2 1

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
using ll = long long;

bool cmp_tang(ll a, ll b){
    if( a != b) return a < b;
    else return a;
}

bool cmp_giam(ll a, ll b){
    if( a != b) return a > b;
    else return a;
}
int main(){

    int n; cin >> n;
    vector<ll> vt;
    for ( int i = 0; i < n; i++){
        ll x; cin >> x;
        vt.push_back(x);
    }
    sort(begin(vt), end(vt), cmp_tang);
    for(auto x:vt) cout << x << " ";
    cout << endl;
    sort(begin(vt), end(vt), cmp_giam);
    for(auto x:vt) cout << x << " ";
    return 0;
}