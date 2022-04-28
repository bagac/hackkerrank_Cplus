// Cho ma trận A các số nguyên có N hàng và M cột. Tìm đường đi từ ở [1, 1] tới ô [N, M] sao cho tổng các số trên đường đi là lớn nhất có thể, biết rằng ở mỗi bước chỉ có thể đi từ ô hiện tại xuống ô phía dưới hoặc đi sang phải.

// Input Format

// Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

// Constraints

// 1≤N,M≤100; 1≤A[i][j]≤10^9

// Output Format

// In ra đường đi có tổng lớn nhất.

// Sample Input 0

// 3 3
// 1 2 2
// 3 10 2
// 5 7 2
// Sample Output 0

// 23
// Explanation 0

// Giải thích : Đường đi được chọn (1, 1) -> (2, 1) -> (2, 2) -> (3, 2) -> (3, 3)
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

ll n, m, a[500][500];


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) cin >> a[i][j];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1) a[i][j] += a[i][j - 1];
            else if(j == 1) a[i][j] += a[i - 1][j];
            else a[i][j] += max(a[i - 1][j], a[i][j - 1]);
        }
    }
    cout << a[n][m] << endl;
}
