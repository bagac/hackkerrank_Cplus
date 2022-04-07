// Tính tổng S(n) = 1/1 + 1/2 + 1/3 + ... + 1/n bằng đệ quy.

// Input Format

// Số nguyên dương n.

// Constraints

// 1≤n≤1000;

// Output Format

// In ra S(n) lấy 3 số sau dấu phẩy.

// Sample Input 0

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

float sum (float n){
    if(n == 1) return n;
    else return (1 / n) + sum (n - 1);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    n = float (n);
    cout << fixed << setprecision(3) << sum(n); 
    return 0;
}
