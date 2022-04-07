// Cho số nguyên không âm N, hãy kiểm tra xem tất cả các chữ số của N có phải đều là số chẵn hay không?

// Input Format

// Số nguyên không âm N.

// Constraints

// 0≤n≤10^18

// Output Format

// In ra YES nếu n toàn chữ số chẵn, ngược lại in ra NO.

// Sample Input 0

// 2280820
// Sample Output 0

// YES

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Even_count = 0;
int Number_count = 0;
void check_Even_number(long long n){
    if( n == 0) return;
    else{
        long long tmp = n % 10;
        Number_count++;   // đếm số lượng chữ số 
        if ( tmp % 2 == 0) Even_count++; // đếm số chẵn
        check_Even_number(n / 10);
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    check_Even_number(n);
    if(Number_count == Even_count) cout << "YES";
    else cout << "NO";
    return 0;
}
