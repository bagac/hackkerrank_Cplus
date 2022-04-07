/*
Tính tổng hàm S(n) = 1^2 + 2^2 + 3^2 + 4^2 + .. + n^2 bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = n * (n + 1) * (2n + 1) / 6

Input Format

Số nguyên dương n.

Constraints

0≤n≤1000; Chú ý các bạn phải code bằng đệ quy nhé.

Output Format

In ra kết quả của S(n)
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int s)
{
    if(s == 0 || s == 1) return s;
    else return s*s + sum(s-1);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
