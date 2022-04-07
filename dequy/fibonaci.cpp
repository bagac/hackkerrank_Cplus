// Dãy số fibonacci là dãy số thỏa mãn : F1=0, F2=1, Fn=Fn-1+Fn-2. Hãy tìm số Fibonacci thứ n sử dụng đệ quy.

// Input Format

// Số nguyên dương n.

// Constraints

// 1≤n≤15;

// Output Format

// In ra số Fibonacci thứ n.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fibo(int n){
    if(n == 1 ) return 0;
    else if (n == 2) return 1;
    else return fibo(n-1) + fibo(n-2);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}
