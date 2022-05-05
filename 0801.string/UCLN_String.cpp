// Cho 2 số N và M, hãy tìm ước chung lớn nhất của N và M. Chú ý ở đây N là một số nguyên lớn và M là một số nguyên 64 bit. Gợi ý : Dùng thuật toán Euclid.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là số nguyên dương M.

// Constraints

// N có không quá 1000 chữ số; M là 1 số nguyên 64 bit.

// Output Format

// In ra UCLN của N và M

// Sample Input 0

// 100
// 20
// Sample Output 0

// 20
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;

inline ll gcd(ll a, ll b){ll r; while(b){r = a%b; a=b;b=r;} return a;}
inline ll lcm(ll a, ll b){return a/gcd(a,b)*b;}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s; cin >> s;
    ll m; cin >> m;
    ll res = 0;
    for( size_t i = 0; i < s.size(); i++){
        res = res * 10 + (s[i] - '0');
        res %= m;
    }
    cout << gcd(m, res) << endl;
    return 0;
}