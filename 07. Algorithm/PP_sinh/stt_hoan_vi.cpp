// Cho số tự nhiên N, hiện tại bạn được cung cấp một hoán vị của N phần tử các số từ 1 đến N. Nhiệm vụ của bạn là xác định xem hoán vị này là hoán vị thứ bao nhiêu nếu bạn sinh ra tất cả các hoán vị của tập N phần tử. Ví dụ với N = 3, thì hoán vị 132 là hoán vị thứ 2.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N số nguyên của cấu hình hiện tại

// Constraints

// 1<=N<=10;

// Output Format

// In ra số thứ tự của hoán vị được cho

// Sample Input 0

// 3
// 3 1 2 
// Sample Output 0

// 5

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[1001];
int n, ok;
void sinh(int a[], int n){
    int i = n -1;
    while( i >= 1 && a[i] > a[i+1]) i--;
    if( i == 0){
        ok = 0;
    }
    else{
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while(l < r){
            swap(a[l], a[r]);
            l++;
            r--;
        }
        
    }
}

// next_permutation(), prev_c
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; cin >> n;
    ok = 1;
    int b[n]; 
    int cnt = 0, pos = 0;
    for(int i = 1; i <= n; i++) cin >> b[i];
    for( int i = 1; i <= n; i++){
        a[i] = i;
    }
    while(ok){
        int check = 0;
        for(int i = 1; i <= n; i++){
            // cout << a[i] << " ";
            if(a[i] == b[i]) check++;
        }
        cnt++;
        if(check == n) pos = cnt;
        // cout << endl;
        sinh(a, n);
    }
    cout << pos;
    
    
}