// Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự tổng chữ số tăng dần, nếu 2 số có cùng tổng chữ số, thì số nào nhỏ hơn sẽ được in trước.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^5; 0<=A[i]<=10^9

// Output Format

// In ra các phần tử trong mảng sau khi sắp xếp

// Sample Input 0

// 5
// 999976710 999982875 999974431 999984407 999972533 
// Sample Output 0

// 999974431 999972533 999976710 999984407 999982875 

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
int tongcs(ll x){
    if( x < 10) return x;
    else{
        int sum = 0;
        while(x){
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
}
bool cmp(ll a, ll b){
    if(tongcs(a) != tongcs(b)) return tongcs(a) < tongcs(b);
    else return a < b;
}
int main(){

    int n; cin >> n;
    vector<ll> vt;
    for( int i = 0; i < n; i++){
        int x; cin >> x;
        vt.push_back(x);
    }
    sort(begin(vt), end(vt), cmp);
    for( auto x:vt) cout << x << " ";
    return 0;
}