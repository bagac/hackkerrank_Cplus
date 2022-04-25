// Cho ma trận A các số nguyên có N hàng và M cột. Điểm được coi là cực đại trong ma trận nếu nó lớn hơn tất các số ở các số ở ô xung quanh mà chung đỉnh với nó. Hãy đếm xem trong ma trận có bao nhiêu điểm cực đại.

// Input Format

// Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

// Constraints

// 1≤N,M≤100; 1≤A[i][j]≤10^9

// Output Format

// In ra số lượng các điểm cực đại của ma trận.

// Sample Input 0

// 5 3
// 1 1 2 
// 1 1 1 
// 1 1 2 
// 2 2 1 
// 2 1 2 
// Sample Output 0

// 1
// Explanation 0

// Có 1 điểm cực đại là điểm (1, 3)

// Sample Input 1

// 3 3
// 1 2 1
// 1 5 1
// 1 0 3
// Sample Output 1

// 1
// Explanation 1

// Có 1 điểm cực đại là (2, 2)
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int a[100][100];
int n, m;

bool check_cuc_dai(int i, int j){
    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] >= a[i][j]){
            return false;
        }
        else if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] < a[i][j]){
            check_cuc_dai(i1, j1);
        }
    }
    return true;
}

int main(){

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(check_cuc_dai(i, j)) cnt++;
        }
    }
    cout << cnt << endl;
}
