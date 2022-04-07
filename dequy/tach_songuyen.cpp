// Cho một số nguyên không âm N, hãy in ra N theo thứ tự các chữ số từ trái qua phải và từ phải qua trái. Chú ý phải sử dụng hàm đệ quy cho cả 2 yêu cầu.

// Input Format

// Số nguyên không âm N.

// Constraints

// 0≤n≤10^18

// Output Format

// Dòng đầu tiên in ra các chữ số của n theo thứ tự từ trái qua phải. Dòng thứ hai in ra các chữ số của n theo thứ tự từ phải qua trái. Các chữ số được viết cách nhau một dấu cách.

// Sample Input 0

// 21218
// Sample Output 0

// 2 1 2 1 8 
// 8 1 2 1 2 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void int_convert_L2R(long long n){
    if(n == 0 ) return;
    else {
        int tmp = n % 10;
        int_convert_L2R(n / 10);
        cout << tmp << " ";
    }
}

void int_convert_R2L(long long n){
    if(n == 0 ) return;
    else {
        int tmp = n % 10;
        cout << tmp << " ";
        int_convert_R2L(n / 10);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    int_convert_L2R(n);
    cout << endl;
    int_convert_R2L(n);
    return 0;
}
