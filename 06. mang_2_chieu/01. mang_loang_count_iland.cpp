// Cho ma trận nhị phân gồm N hàng và M cột chỉ bao gồm các số 0 và 1. Hãy đếm số lượng miền các số 1 trong ma trận, các ô số 1 được coi là cùng miền nếu chúng có chung cạnh.

// Input Format

// Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

// Constraints

// 1≤N,M≤50.

// Output Format

// In ra số lượng miền số 1 trong ma trận.

// Sample Input 0

// 4 7
// 0 1 1 0 1 1 0 
// 1 1 1 1 1 1 1 
// 1 0 0 0 0 1 1 
// 1 1 0 1 0 0 0 
// Sample Output 0

// 2

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int a[100][100];
int n, m;

void loang(int i, int j){
    a[i][j] = 0; // danh dau o nay da duoc tham
    // cout << "Di tham o " << i << ' ' << j << endl;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1){
            loang(i1, j1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                ++cnt;
                // cout << "Xet mien co o bat dau la " << i << ' ' << j << " :\n";
                loang(i, j);
            }
        }
    }
    cout << cnt << endl;
}
