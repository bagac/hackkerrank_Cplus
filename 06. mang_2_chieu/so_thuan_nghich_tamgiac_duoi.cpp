// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số thuận nghịch thuộc tam giác dưới của ma trận trên.

// Input Format

// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Constraints

// 1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9.

// Output Format

// In ra số lượng số thuận nghịch trong ma trận.

// Sample Input 0

// 3
// 1 2 3
// 22 14 56
// 76 5 4
// Sample Output 0

// 4
// Explanation 0

// 4 số là số thuận nghịch thuộc tam giác dưới là : 1, 22, 4, 5

#include <bits/stdc++.h>

using namespace std;
int a[500][500];
bool stn( int num){
    int old_num = num, new_num = 0, tmp;
    while(num>0)
    {
        tmp = num % 10;
        new_num = (new_num * 10) + tmp;
        num = num/10;
    }
    if(old_num == new_num) return true;
    else return false;
}
int main(){

    int n; cin >> n;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for( int i = 0; i < n; i++){
        for( int j = 0; j <= i; j++){
             if(stn(a[i][j])) ans++;
        }
    }
    cout << ans;
    return 0;
}