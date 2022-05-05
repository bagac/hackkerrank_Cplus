// Cho số nguyên dương N được biểu diễn được dạng số nhị phân, hãy kiểm tra xem N có chia hết cho 2^K hay không, Ví dụ N = 11000 (24 hệ thập phân) chia hết cho 2^3.

// Input Format

// Dòng đầu tiên là số N có không quá 1000 bit. Dòng thứ 2 là số nguyên dương K.

// Constraints

// N có không quá 1000 bit. 1<=K<=1000.

// Output Format

// In ra YES nếu N chia hết cho 2^K, ngược lại in ra NO.

// Sample Input 0

// 101010010000
// 3
// Sample Output 0

// YES
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s; cin >> s;
    int k; cin >> k;
    int cnt = 0;
    for( size_t i = s.size() - 1; i >= 0; i--){
        if(s[i] == '0') ++cnt;
        else break;
    }
    if(cnt >= k) cout << "YES";
    else cout << "NO";
    return 0;
}