// Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy tính tổng các phần tử trên từng hàng và tổng các phần tử trên từng cột của ma trận.

// Input Format

// Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.

// Constraints

// 1≤n,m≤200; Các phần tử trong ma trận là số dương không quá 10^9.

// Output Format

// Dòng đầu tiên, in ra N số là tổng của N hàng. Dòng thứ 2 in ra M số là tổng của M cột.

// Sample Input 0

// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output 0

// 6 15 24 
// 12 15 18 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define max_a 500
using ll = long long;
int a[max_a][max_a];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, m; cin >> n >> m;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    ll sum_h = 0, sum_c = 0;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            sum_h += a[i][j];
        }
        cout << sum_h << " ";
        sum_h = 0;
    }
    cout << endl;
    
    for( int j = 0; j < m; j++){
        for( int i = 0; i < n; i++){
            sum_c += a[i][j];
        }
        cout << sum_c << " ";
        sum_c = 0;
    }
    cout << endl;
    
    return 0;
}
