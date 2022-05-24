// Cho N bạn học sinh, giáo viên muốn xếp các bạn học sinh này vào một hàng ngang gồm N chiếc ghế. Nhiệm vụ của bạn là liệt kê các cách sắp xếp N bạn học sinh này theo thứ tự tên người tăng dần về thứ tự từ điển.

// Input Format

// Dòng đầu tiên là số N. Dòng thứ 2 là N tên học sinh, mỗi tên chỉ bao gồm một từ.

// Constraints

// 1<=N<=10;

// Output Format

// In ra các cách xếp trên từng dòng.

// Sample Input 0

// 3
// Lan Ngoc Nhung 
// Sample Output 0

// Lan Ngoc Nhung 
// Lan Nhung Ngoc 
// Ngoc Lan Nhung 
// Ngoc Nhung Lan 
// Nhung Lan Ngoc 
// Nhung Ngoc Lan 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
string a[1001];
int n, ok;
void sinh(string a[], int n){
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
    for( int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    while(ok){
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh(a, n);
    }
    
    
}