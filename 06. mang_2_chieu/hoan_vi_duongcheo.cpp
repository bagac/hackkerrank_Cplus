// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy hoán vị các phần tử trên 2 đường chéo chính và phụ của ma trận.

// Input Format

// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Constraints

// 1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9.

// Output Format

// In ra ma trận sau khi hoán vị 2 đường chéo

// Sample Input 0

// 8
// 519 178 774 271 764 669 193 986 
// 103 481 214 628 803 100 528 626 
// 544 925 24 973 62 182 4 433 
// 506 594 726 32 493 143 223 287 
// 65 901 188 361 414 975 271 171 
// 236 834 712 761 897 668 286 551 
// 141 695 696 625 20 126 577 695 
// 659 303 372 467 679 594 852 485 
// Sample Output 0

// 986 178 774 271 764 669 193 519 
// 103 528 214 628 803 100 481 626 
// 544 925 182 973 62 24 4 433 
// 506 594 726 493 32 143 223 287 
// 65 901 188 414 361 975 271 171 
// 236 834 668 761 897 712 286 551 
// 141 577 696 625 20 126 695 695 
// 485 303 372 467 679 594 852 659 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[500][500];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            if(j == (n - i - 1)){
                swap(a[i][i], a[i][n-i-1]);
            }
        }
    }
    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}