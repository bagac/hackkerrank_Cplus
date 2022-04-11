// Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có phải toàn số chẵn hay không?

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

// Constraints

// 1≤n≤1000; 1≤A[i]≤10^6

// Output Format

// In ra YES nếu mảng toàn số chẵn, ngược lại in ra NO.

// Sample Input 0

// 4
// 2 8 10 20012
// Sample Output 0

// YES

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check_mang_odd(long long *array_check, int size_array){
    if(array_check[size_array - 1] % 2 != 0) return 0;
    else return 1 + check_mang_odd(array_check, size_array - 1);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    long long array_input[n];
    for(int i = 0; i < n; i++){
        cin >> array_input[i];
    }
    if(check_mang_odd(array_input, n) == n) cout << "YES";
    else cout << "NO";
    return 0;
}
