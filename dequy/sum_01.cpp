/*
Tính tổng hàm S(n) = 1 + 2 + 3 + 4 + .. + n bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = n * (n + 1) / 2

Input Format

Số nguyên dương n.

Constraints

0≤n≤1000; Chú ý các bạn phải code bằng đệ quy nhé.

Output Format

In ra S(n).
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int n){
    if(n == 0 || n == 1) return n;
    else return n + sum(n-1);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
