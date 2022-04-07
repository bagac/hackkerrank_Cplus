/*
Tính n giai thừa bằng đệ quy. Do kết quả của n! tăng rất nhanh, vì thế bạn hãy in ra kết quả sau khi chia dư cho (10^9+7).

Input Format

Số nguyên dương N.

Constraints

0≤n≤10^3;

Output Format

Kết quả của N! chia dư cho (10^9+7).
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define m 1000000007
long long giaithua(long long n){
    if( n == 0 || n == 1) return 1;
    else return (n * giaithua(n-1)) % m;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    cout << giaithua(n);
    return 0;
}
