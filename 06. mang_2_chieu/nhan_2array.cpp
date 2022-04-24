// Cho ma trận A cỡ NxM, ma trận B cỡ MxP. Hãy tính ma trận tích của A và B.

// Input Format

// Dòng đầu tiên là 3 số N, M, P; N dòng tiếp theo, mỗi dòng M của ma trận A; M dòng tiếp theo, mỗi dòng P số của ma trận B

// Constraints

// 1≤N,M,P≤50; Các phần tử trong ma trận là số dương không quá 100000;

// Output Format

// In ra ma trận tích của A và B

// Sample Input 0

// 3 4 5
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// Sample Output 0

// 110 120 130 140 150
// 246 272 298 324 350
// 382 424 466 508 550
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, p; cin >> n >> m >> p;
    int a[n][m], b[m][p];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++) cin >> b[i][j];
    }
    ll c[n][p];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            //tinh c[i][j]
            c[i][j] = 0;
            for(int k = 0; k < m; k++){
                c[i][j] += 1ll * a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << c[i][j] << ' '; 
        }
        cout << endl;
    }
}
