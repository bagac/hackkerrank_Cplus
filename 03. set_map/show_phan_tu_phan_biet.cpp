// Cho dãy số A[] gồm có N phần tử, bạn hãy liệt kê các giá trị xuất hiện trong dãy theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê một lần.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng thứ 2 gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 10^5; 0 ≤ A[i], X ≤ 10^9;

// Output Format

// In ra các giá trị xuất hiện trong mảng theo thứ tự xuất hiện.

// Sample Input 0

// 8
// 1 2 3 2 1 3 4 8
// Sample Output 0

// 1 2 3 4 8

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n; cin >> n;
    long long array_input[n];
    set <long long> set_input;

    for( int i = 0; i < n; i++){
        cin >> array_input[i];
        set_input.insert(array_input[i]);
    }
    for( int i = 0; i < n; i++){
        auto it = set_input.find(array_input[i]);
        if( it != set_input.end() ) {
            cout << array_input[i] << " ";
            set_input.erase(array_input[i]);
        }
    }

    return 0;
}