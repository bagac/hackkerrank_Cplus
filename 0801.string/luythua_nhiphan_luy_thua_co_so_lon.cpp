// Cho 2 số N và M, hãy tính N^M%(10^9 + 7). Trong đó N là một số nguyên lớn, M là một số nguyên 64 bit. Gợi ý : Để làm được bài này các bạn phải sử dụng lũy thừa nhị phân để tránh Time Limit.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là số nguyên dương M.

// Constraints

// N có không quá 1000 chữ số; M là 1 số nguyên 64 bit.

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 2
// 10
// Sample Output 0

// 1024
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;
ll powMod(ll a, ll b, ll mod){
    ll res = 1;
    while(b){
        if( b % 2){
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return res;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s; cin >> s;
    ll m; cin >> m;
    ll res = 0;
    for( size_t i = 0; i < s.size(); i++){
        res = res * 10 + (s[i] - '0');
        res %= (int)1e9 + 7;
    }
    cout << powMod(res, m, (int)1e9 + 7) << endl;
    return 0;
}