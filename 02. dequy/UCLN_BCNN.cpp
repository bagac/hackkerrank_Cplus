// Cho 2 số a và b, hãy tính ước chung lớn nhất và bội chung nhỏ nhất của 2 số a và b. Trong đó hàm UCLN sử dụng đệ quy để tính.

// Input Format

// 2 số nguyên dương a và b.

// Constraints

// 1≤a,b≤10^12;

// Output Format

// In ra UCLN và BCNN của 2 số. Dữ liệu đảm bảo UCLN của 2 số nằm trong khoảng số nguyên 64 bit.

// Cho 2 số a và b, hãy tính ước chung lớn nhất và bội chung nhỏ nhất của 2 số a và b. Trong đó hàm UCLN sử dụng đệ quy để tính.

// Input Format

// 2 số nguyên dương a và b.

// Constraints

// 1≤a,b≤10^12;

// Output Format

// In ra UCLN và BCNN của 2 số. Dữ liệu đảm bảo UCLN của 2 số nằm trong khoảng số nguyên 64 bit.

// Sample Input 0

// 10 20
// Sample Output 0

// 10 20

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long gcd ( long long a, long long b){
    if ( a == 0 || b == 0) return a+b;
    while ( a != b ){
        if( a > b) a = a - b;
        else b = b - a;
    }
    return a;

}

long long dequy_gcd( long long a, long long b){
    if ( a == 0 || b == 0) return a+b;
    if ( a == b ) return a;
    else{
        if ( a > b)  return dequy_gcd( a - b, b);
        else return dequy_gcd(a, b - a);
    }
}

// bội chung nhỏ nhất của a và b = a*b / gcd(a,b)
long long lcm (long long a, long long b){
    return a*b/ gcd(a,b);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a, b;
    cin >> a >> b;
    cout << dequy_gcd(a,b) << " " << lcm(a, b);
    return 0;
}
