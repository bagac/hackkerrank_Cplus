// Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có đối xứng hay không bằng cách sử dụng hàm đệ quy.

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

// Constraints

// 1≤n≤1000; 1≤A[i]≤10^6

// Output Format

// In ra YES nếu mảng A là mảng đối xứng, ngược lại in ra NO.

// Sample Input 0

// 5
// 1 2 3 2 1
// Sample Output 0

// YES

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int tmp = 0;
int doi_xung(long long *array, int size_array){
    if(array[tmp] != array[size_array - 1 - tmp] || tmp == size_array) return 0;
    tmp++;
    return 1 + doi_xung(array, size_array);
}
bool dx(int a[], int left, int right){
    if ( left >= right ) return true;
    if( a[left] != a[right]) return false;
    return dx(a, left + 1, right - 1);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    long long array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    if( doi_xung(array, n) > 0) cout << "YES";
    else cout << "NO";
    return 0;
}
