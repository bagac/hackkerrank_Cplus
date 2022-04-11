// Cho một số nguyên không âm N, hãy in ra chữ số lớn nhất và chữ số nhỏ nhất của N.

// Input Format

// Số nguyên dương N

// Constraints

// 10≤n≤10^18

// Output Format

// Chữ số lớn nhất và nhỏ nhất của N.

// Sample Input 0

// 1256782
// Sample Output 0

// 8 1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long max_number = 0, min_number = 1e18;
void check_min_max(long long n){
    if ( n == 0) return;
    else {
        long long tmp = n % 10;
        if(tmp >= max_number) max_number = tmp;
        if ( tmp <= min_number) min_number = tmp;
        check_min_max(n / 10);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    check_min_max(n);
    cout << max_number << " " << min_number;
    return 0;
}
