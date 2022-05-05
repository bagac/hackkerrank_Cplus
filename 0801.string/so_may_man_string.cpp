// Một số nguyên không âm n được gọi là số may mắn nếu tổng các chữ của n bằng 9 hoặc tổng các chữ số của n là số may mắn. Ví dụ các số 9, 108, 279 là các số may mắn, còn các số 19, 289 không phải là số may mắn.

// Input Format

// Số nguyên dương N.

// Constraints

// N có không quá 1000 chữ số.

// Output Format

// In ra YES nếu N là số may mắn, ngược lại in ra NO.

// Sample Input 0

// 18
// Sample Output 0

// YES
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sum ( long long n){
    int res = 0;
    while(n){
        res += n%10;
        n /= 10;
    }
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    int res = 0;
    for( auto x:s) res += x - '0';
    while(res > 9){
        res = sum(res);
    }
    if( res == 9) cout << "YES";
    else cout << "NO";
    return 0;
}