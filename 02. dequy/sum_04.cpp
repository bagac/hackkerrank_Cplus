/*
Tính tổng hàm S(n) = -1 + 2 -3 + 4 - 5 + 6 + ... + (-1)^n * n bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức Nếu N chẵn thì S(n) = n / 2, còn nếu N lẻ thì S(n) = (n - 1) / 2 - n

Input Format

Số nguyên dương n.

Constraints

1≤n≤10^3; Chú ý các bạn phải code bằng đệ quy nhé.

Output Format

In ra kết quả của S(n)
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long sum(long long n){
    if( n == 0 || n == 1) return -n;
    else return pow(-1, n)*n + sum(n-1);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long n;
    cin >> n;
    cout << sum(n);  
    return 0;
}
