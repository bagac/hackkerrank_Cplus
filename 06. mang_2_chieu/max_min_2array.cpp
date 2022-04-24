// Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy tìm số nhỏ nhất trong ma trận và số lớn nhất trong ma trận, sau đó liệt kê các vị trí xuất hiện của các phần tử này trong ma trận.

// Input Format

// Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.

// Constraints

// 1≤n,m≤200; Các phần tử trong ma trận là số dương không quá 10^9.

// Output Format

// Dòng đầu tiên in ra số nhỏ nhất trong ma trận, các dòng tiếp theo liệt kê các vị trí của số này trong ma trận. Dòng tiếp theo in ra số lớn nhất trong ma trận, các dòng tiếp theo liệt kê các vị trí của số này trong ma trận. Xem test case mẫu để rõ hơn.

// Sample Input 0

// 3 3
// 1 2 1
// 4 5 6
// 7 8 9
// Sample Output 0

// 1
// 1 1
// 1 3
// 9
// 3 3

#include <bits/stdc++.h>

using namespace std;
int a[500][500];
int main(){

    int n, m; cin >> n >> m;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int min_v = INT_MAX, max_v = INT_MIN;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            min_v = min(min_v, a[i][j]);
            max_v = max(max_v, a[i][j]);
        }
    }
    cout << min_v << endl;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            if( min_v == a[i][j]){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
    cout << max_v << endl;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < m; j++){
            if( max_v == a[i][j]){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
    return 0;
}