// Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có phải là mảng tăng dần hay không, mảng tăng dần được định nghĩa là mảng mà phần tử hiện tại luôn lớn hơn các phần tử đứng trước nó.

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

// Constraints

// 1≤n≤1000; 1≤A[i]≤10^6

// Output Format

// In ra YES nếu mảng toàn là mảng tăng dần, ngược lại in ra NO.

// Sample Input 0

// 5
// 1 1 8 9 20
// Sample Output 0

// NO
// Sample Input 1

// 5
// 1 1 1 1 1
// Sample Output 1

// NO

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check_array(long long *array, int size_array){
    int max_number = array[size_array-1];
    if(array[size_array-2] >= max_number) return 0;
    else return 1 + check_array(array, size_array - 1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    long long array_input[n];
    for( int i = 0; i < n; i++){
        cin >> array_input[i];
    }
    if( check_array(array_input, n) == (n - 1) ) cout << "YES";
    else cout << "NO";
    return 0;
}
