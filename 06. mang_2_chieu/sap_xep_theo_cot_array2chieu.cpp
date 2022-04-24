// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy sắp xếp các phần tử trong ma trận theo cột theo thứ tự tăng dần.

// Input Format

// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Constraints

// 1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9;

// Output Format

// In ra ma trận sau khi đã sắp xếp theo cột tăng dần.

// Sample Input 0

// 3
// 1 2 3
// 5 5 2
// 1 4 7
// Sample Output 0

// 1 2 2
// 1 4 3
// 5 5 7

#include <bits/stdc++.h>
using namespace std;
#define max_v  500
int a[max_v][max_v];

// void BubbleSortA(int A[max_v][max_v], int m, int n) // theo dong
// {
//    for(int k = 0; k<m ; k++)
//       for(int i = 0; i<n-1 ; i++)
//       for(int j = n-1; j>i ; j--)
//       if(A[k][j]<A[k][j-1])
//       {
//          int temp = A[k][j];
//          A[k][j] = A[k][j-1];
//          A[k][j-1] = temp;
//       }
// }

void sort_theo_cot(int A[max_v][max_v], int m, int n) // theo cot
{
   for(int k = 0; k < n ; k++)
      for(int i = 0; i<n-1 ; i++)
      for(int j = n-1; j>i ; j--)
      if(A[j][k]<A[j][k-1])
      {
         int temp = A[j][k];
         A[j][k] = A[j][k-1];
         A[j][k-1] = temp;
      }
}

int main(){
    int n; cin >> n;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    BubbleSortA(a, n, n);

    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cout << a[i][j];
        }
    }
    return 0;
}