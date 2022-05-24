// Cho số tự nhiên N, bạn được cung cấp một hoán vị của N phần tử từ 1 tới N. Nhiệm vụ của bạn là sinh ra hoán vị kế tiếp của hoán vị được cho, nếu hoán vị được cho là hoán vị cuối cùng thì yêu cầu in ra hoán vị đầu tiên.

// Input Format

// Dòng đầu tiên là số tự nhiên N. Dòng thứ 2 là các số tự nhiên trong hoán vị hiện tại.

// Constraints

// 1<=N<=1000;

// Output Format

// In ra hoán vị kế tiếp trên một dòng.

// Sample Input 0

// 6
// 3 1 5 6 2 4 
// Sample Output 0

// 3 1 5 6 4 2 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[1001], n, ok;
void sinh(int a[], int n){
    int i = n -1;
    while( i >= 1 && a[i] > a[i+1]) i--;
    if( i == 0){
        for(int i = 1; i <= n; i++){
            cout << i << " ";
        }
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
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
    }
}

// next_permutation(), prev_
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; cin >> n;
    int a[n];
    for( int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sinh(a, n);
    
}