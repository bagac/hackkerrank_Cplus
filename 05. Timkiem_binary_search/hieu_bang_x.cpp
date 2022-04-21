// Cho mảng A[] gồm N phần tử và số X. Nhiệm vụ của bạn là tìm cặp phần tử A[i] - A[j] = X. Nếu tồn tại A[i] - A[j] = X đưa ra 1, ngược lại đưa ra -1.

// Input Format

// Dòng thứ nhất là cặp số N, X; Dòng tiếp theo là N số A[i] là các phần tử của mảng A[].

// Constraints

// 1≤ N ≤10^5; 1≤ X, A[i] ≤10^5.

// Output Format

// In ra 1 nếu tìm thấy một cặp số có hiệu bằng X, ngược lại in ra -1.

// Sample Input 0

// 5 3
// 1 1 2 3 5
// Sample Output 0

// 1


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int first_pos( int a[], int left_pos, int right_pos, int x){
    int res = -1;
    while ( left_pos <= right_pos ){
        int mid = ( left_pos + right_pos ) / 2;
        if ( a[mid] == abs(x)){
            res = 1;
            break;
        }
        else if( a[mid] < abs(x)) left_pos = mid + 1;
        else right_pos = mid - 1;
    }
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k; cin >> n >> k;
    int a[n];
    for ( int &x:a ) cin >> x;
    sort(a, a + n);
    int ans = -1;
    for (int i = 0; i < n; i++){
        ans = first_pos(a, i + 1, n - 1, k + a[i]);
        if( ans == 1) break;
    }
    cout << ans;
    return 0;
}