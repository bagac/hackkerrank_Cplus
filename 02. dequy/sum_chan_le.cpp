// Cho số nguyên không âm N, hãy tính tổng các chữ số chẵn, tổng các chữ số lẻ của N.

// Input Format

// Số nguyên không âm N.

// Constraints

// 0≤n≤10^18

// Output Format

// Dòng đầu tiên in ra tổng các chữ số chẵn. Dòng thứ 2 in ra tổng các chữ số lẻ.

// Sample Input 0

// 123456
// Sample Output 0

// 12
// 9

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum_all = 0;
int sum_Odd = 0, sum_Even = 0;
void sum(long long n){
    if ( n == 0 ) return;
    else{
        int tmp = n % 10;
        if( tmp % 2 == 0) sum_Even += tmp;
        else sum_Odd += tmp;
        sum_all += tmp;
        sum(n / 10);
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    sum(n);
    cout << sum_Even << endl;
    cout << sum_Odd;
    return 0;
}
