// Cho mảng số nguyên A[] có N phần tử, tìm độ chênh lệch nhỏ nhất giữa 2 phần tử A[i] và A[j] trong mảng(i và j khác nhau).

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^5; 0<=A[i]<=10^9

// Output Format

// In ra độ lệch nhỏ nhất của 2 phần tử trong mảng

// Sample Input 0

// 5
// 1 2 7 9 0
// Sample Output 0

// 1

#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;
using ll = long long;

bool cmp(ll a, ll b){
    if( a != b ) return a < b;
    else return a;
}
int main(){
    long long n; cin >> n;
    vector <ll> a;
    set <ll> s;
    for( long long i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
        s.insert(x);
    }
    sort(begin(a), end(a), cmp);
    cout << a[1] - a[0];
    return 0;
}