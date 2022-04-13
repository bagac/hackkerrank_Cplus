// Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là tính tổng các số trong dãy từ chỉ số l tới chỉ số r.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]. Dòng tiếp theo là số lượng truy vấn Q. Q dòng tiếp theo mỗi dòng là 2 chỉ số l, r.

// Constraints

// 1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^9; 1 ≤ Q ≤ 1000; 1 ≤ l ≤ r ≤ N

// Output Format

// In ra tổng các phần tử trong đoạn [l, r] của từng truy vấn trên 1 dòng.

// Sample Input 0

// 5
// 1 2 3 4 5
// 1
// 1 3
// Sample Output 0

// 6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    long long dp[n];
    for(int i = 0; i< n; i++){
        cin >> a[i];
        if(i == 0){
            dp[i] = a[i];
        }
        else{
            dp[i] = dp[i-1] + a[i];
        }
    }
    for(int i = 0; i < n; i++){
        cout << dp[i] << " ";
    }
    cout << endl;
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        --l; 
        cout << "l = " << l << " ";
        --r; 
        cout << "r = " << r << " ";
        cout << endl;
        if(l == 0){
            cout << dp[r] << endl;
        }
        else{
            cout << dp[r] - dp[l-1] << endl;
        }
    }
}