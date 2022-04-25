// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy sắp xếp các phần tử của từng hàng của ma trận theo thứ tự tăng dần.

// Input Format

// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Constraints

// 1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9;

// Output Format

// In ra ma trận sau khi sắp xếp

// Sample Input 0

// 3
// 2 7 6
// 1 2 3
// 9 8 1
// Sample Output 0

// 2 6 7
// 1 2 3
// 1 8 9
#include <bits/stdc++.h>
using namespace std;
int a[500][500];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    int b[n*n];
    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int k = 0;
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            b[k] = a[i][j];
            k++;
        }
        
    }
    for( int i = 0; i < n*n; i += n){
        sort(b+i, b+i+n);
    }
    for(int i = 0; i < n*n; i++){
        cout << b[i];
        if(i % n == n-1) cout << endl;
        else cout << " ";
    }
    return 0;
}
