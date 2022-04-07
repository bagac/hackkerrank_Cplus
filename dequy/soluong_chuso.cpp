// Cho một số nguyên không âm N, hãy đếm số lượng chữ số của N.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// Số lượng chữ số của N.

// Sample Input 0

// 123452
// Sample Output 0

// 6

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int count_num = 0;
void sum_number(long long n){
    if (n == 0) return;
    else{
        int tmp = n % 10;
        count_num++;
        sum_number(n / 10);
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    if ( n < 10) cout << 1;
    else {
        sum_number(n);
        cout << count_num;
    }
    return 0;
}

