// Cho một số nguyên không âm N, hãy tính tổng chữ số của N sử dụng kỹ thuật đệ quy.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// Tổng các chữ số của N

// Sample Input 0

// 123456789
// Sample Output 0

// 45

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum_all = 0;
void sum(long long n){
    if ( n == 0 ) return;
    else{
        int tmp = n % 10;
        sum_all += tmp;
        sum(n / 10);
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    if (n < 10) cout << n;
    else {
        sum(n);
        cout << sum_all;
    }
    return 0;
}
