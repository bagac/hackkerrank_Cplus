// Cho mảng số nguyên A[] có N phần tử, tìm độ chênh lệch nhỏ nhất giữa 2 phần tử A[i] và A[j] trong mảng(i và j khác nhau).

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^5; 0<=A[i]<=10^9

// Output Format

// In ra độ lệch nhỏ nhất của 2 phần tử trong mảng

// Sample Input 0

// 5
// 1 2 7 9 0
// Sample Output 0

// 1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n];
    for( int i = 0; i < n; i ++){
        cin >> a[i];
    }
    int min = 1e9+1;
    sort(a, a+n);
    for( int ii = 0; ii < n - 1; ii++)
    {
        if(a[ii+1] - a[ii] < min) min = a[ii+1] - a[ii];
    }
    if(n < 2) cout << 0;
    else cout << min;
    return 0;
}