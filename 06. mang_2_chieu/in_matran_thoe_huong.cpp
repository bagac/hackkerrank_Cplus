// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy in ra ma trận theo các mẫu dưới đây.

// Input Format

// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Constraints

// 1≤n≤100; Các phần tử trong ma trận là số dương không quá 10^9.

// Output Format

// In ra ma trận theo mẫu, xem test case để rõ hơn.

// Sample Input 0

// 5
// 510 745 649 186 313 
// 474 22 168 18 787 
// 905 958 391 202 625 
// 477 414 314 824 334 
// 874 372 159 833 70 
// Sample Output 0

// Pattern 1:
// 510 474 905 477 874 
// 745 22 958 414 372 
// 649 168 391 314 159 
// 186 18 202 824 833 
// 313 787 625 334 70 
// Pattern 2:
// 70 833 159 372 874 
// 334 824 314 414 477 
// 625 202 391 958 905 
// 787 18 168 22 474 
// 313 186 649 745 510 
// Pattern 3:
// 313 787 625 334 70 
// 186 18 202 824 833 
// 649 168 391 314 159 
// 745 22 958 414 372 
// 510 474 905 477 874 
// Pattern 4:
// 313 186 649 745 510 
// 787 18 168 22 474 
// 625 202 391 958 905 
// 334 824 314 414 477 
// 70 833 159 372 874 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[500][500];
void show_Pattern01(int a[][500], int n, int m){
    cout << "Pattern 1:\n";
    for( int j = 0; j < n; j++){
        for( int i = 0; i < m; i++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void show_Pattern02(int a[][500], int n, int m){
    cout << "Pattern 2:\n";
    for( int i = n-1; i >= 0; i--){
        for( int j = m-1; j >= 0; j--){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void show_Pattern03(int a[][500], int n, int m){
    cout << "Pattern 3:\n";
    for( int j = m-1; j >= 0; j--){
        for( int i = 0; i < n; i++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void show_Pattern04(int a[][500], int n, int m){
    cout << "Pattern 4:\n";
    for( int i = 0; i < n; i++){
        for( int j = m-1; j >= 0; j--){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    show_Pattern01(a, n, n);
    show_Pattern02(a, n, n);
    show_Pattern03(a, n, n);
    show_Pattern04(a, n, n);
    return 0;
}
