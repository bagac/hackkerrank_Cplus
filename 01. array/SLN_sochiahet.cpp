/*
Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất mà mọi số trong mảng đều chia hết cho số đó.

Input Format

Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

Constraints

1<=N<=10^6; 0<=A[i]<=10^6

Output Format

In ra kết quả của bài toán
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long N;
    cin >> N;
    long long array[N];
    long long max = 0;
    for (long long i = 0; i < N; i++){
        cin >> array[i];
    }
    return 0;
}
