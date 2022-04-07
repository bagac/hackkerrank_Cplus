// Cho 2 số nguyên không âm a và b. Hãy tính a^b%(10^9+7). Kiến thức bạn cần sử dụng là Binayr Exponentiation.

// tinh a ^ b với:
// - b là số chẵn => a^b = a^(b/2)*a^(b/2)
// - b là số lẻ => a^b = a^(b/2) * a^(b/2) * a

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a,b≤10^9

// Output Format

// In ra kết quả của bài toán.

// Sample Input 0

// 2 10
// Sample Output 0

// 1024

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define m 1000000007
long long luythua_nhiphan(long long a, long long b){
    if ( b == 0 ) return 1;
    long long x = luythua_nhiphan(a, b/2);
    if( b % 2 == 1) return ((x%m)*(x%m)*(a%m))%m;
    else return ((x%m)*(x%m));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a, b;
    cin >> a >> b;
    cout << luythua_nhiphan(a, b);
    return 0;
}