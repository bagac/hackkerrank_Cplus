/*
Cho mảng số nguyên A[] gồm N phần tử, kiểm tra xem mảng có đối xứng hay không?

Input Format

Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

Constraints

1<=N<=10^6; 0<=A[i]<=10^6

Output Format

In ra YES hoặc NO tương ứng với mảng đối xứng hoặc không.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    long long array[n];
    for(long long i = 0; i < n; i++){
        cin >> array[i];
    }
    long long check = 0;
    for(long long T = 0; T < (n/2); T++){
            cout << "T: " << array[T] << " - R: " << array[(n-1) - T] << endl;
            if(array[T] == array[(n-1) - T]) check ++;
    }
    if( check == n/2) cout << "YES";
    else cout << "NO";
    return 0;
}
