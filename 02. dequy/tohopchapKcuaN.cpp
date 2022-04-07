// Cho 2 số nguyên dương N và K. Hãy tính tổ hợp chập K của N. Tiện thể các bạn ôn lại một vài tính chất của tổ hợp chập K của N nhé.

// image

// Input Format

// 2 số nguyên dương N và K.

// Constraints

// 0≤k≤n≤10.

// Output Format

// Kết quả của tổ hợp chập K của N.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int giaithua(int n){
    if( n == 0 || n == 1) return 1;
    else return (n * giaithua(n-1));
}

int tohop(int k, int n){
    if( k == 0 || k == n) return 1;
    else return giaithua(n)/(giaithua(k)*(giaithua(n-k)));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k;
    cin >> n >> k;
    cout << tohop(k,n);
    return 0;
}
