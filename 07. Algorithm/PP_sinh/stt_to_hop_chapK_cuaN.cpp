// Cho 2 số nguyên dương N và K và một tổ hợp K phần tử của tập N phần tử các số từ 1 tới N. Bạn hãy xác định xem tổ hợp đã cho có số thứ tự bao nhiêu nếu xếp các tổ hợp chập K của N theo thứ tự ngược. Ví dụ N = 5, K = 3 và tổ hợp đã cho là (2, 3, 4) sẽ là tổ hợp có số thứ tự 4.

// Input Format

// Dòng đầu gồm 2 số nguyên dương N và K. Dòng thứ 2 gồm K số mô tả tổ hợp đã cho. Dữ liệu đảm bảo tổ hợp đã cho là hợp lệ.

// Constraints

// 1<=K<=N<=15;

// Output Format

// In ra số thứ tự của tổ hợp

// Sample Input 0

// 12 4
// 8 9 10 11 
// Sample Output 0

// 5
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n, k, ok;
int cnt, pos;
int a[100];
 void sinh(){
    int i = k;
    while( i >= 1 && a[i] == n - k + i) i--;
    if( i == 0){
        ok = 0;
    }
    else{
        a[i]++;
        for( int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }

    }
 }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    cin >> n >> k;
    int b[k];
    for(int i = 1; i <= k; i++) cin >> b[i];
    for( int i = 1; i <= n; i++){
        a[i] = i;
    }
    ok = 1;
    while( ok ){
        int check = 0;
        for( int i = 1; i <= k; i++){
            cout << a[i];
            if(a[i] == b[i]) check++;
        }
        cnt++;
        // cout << " cnt = " << cnt << " check = " << check;
        cout << endl;
        if( check == k) pos = cnt;
        sinh();
    }
    // cout << "KQ: " << endl;
    cout << (cnt - pos) + 1 << endl;
    return 0;
}