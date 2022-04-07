/*
Cho mảng số nguyên A[] gồm N phần tử, hãy tính tổng, tích của các phần tử trong mảng và lấy dư với 10^9+7.

Input Format

Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

Constraints

1<=N<=10^6; 0<=A[i]<=10^6

Output Format

Dòng đầu tiên in ra tổng các phần tử trong mảng chia dư với 10^9 + 7; Dòng thứ hai in ra tích các phần tử trong mảng chia dư với 10^9 +7;
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define m 1000000007

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long num_array;
    cin >> num_array;
    long long array[num_array];
    long long tong = 0, tich = 1;
    for (long long i = 0; i < num_array; i++){
        cin >> array[i];
        tong = (tong + array[i]) % m;
        tich = (tich * array[i]) % m;
    }
    cout << tong  << endl;
    cout << tich  << endl;
    return 0;
}
