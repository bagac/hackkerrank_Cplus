/*
Tính tổng hàm S(n) = 1^3 + 2^3 + 3^3 + 4^3 + .. + n^3 bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = [(n * (n + 1) / 2)]^2

Input Format

Số nguyên dương n.

Constraints

0≤n≤10^3; Chú ý các bạn phải code bằng đệ quy nhé.

Output Format

In ra kết quả của S(n)
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long long sum(long long s){
    if(s == 0 || s == 1) return s;
    else return s*s*s + sum(s-1);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    cout << sum(n);
    return 0;
}
