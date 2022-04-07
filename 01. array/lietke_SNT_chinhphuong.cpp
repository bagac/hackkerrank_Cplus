/*
Cho mảng số nguyên A[] gồm N phần tử, hãy đếm số lượng các phần tử thỏa mãn các yêu cầu sau

Số lượng số nguyên tố trong dãy
Số lượng số thuận nghịch trong dãy
Số lượng số chính phương trong dãy
Số lượng số có tổng chữ số của nó là số nguyên tố.
Input Format

Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

Constraints

1<=N<=100; 0<=A[i]<=10000;

Output Format

In ra 4 dòng số lượng số tương ứng với 4 yêu cầu trên
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool SNT(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;

}

bool sum_SNT(int n){
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return SNT(sum);
}

bool thuannghich(int n){
    int lat =0, tmp = n;
    while(n != 0){
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    return lat == tmp;
}

bool chinhphuong(int n){
    int can = sqrt(n);
    if ((can * can) == n) return true;
    else return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int array[n];
    int check_SNT = 0, check_TN = 0, check_CP = 0, check_sum_SNT = 0;
    for (int i = 0; i < n; i++){
        cin >> array[i];
        if(SNT(array[i])){
            check_SNT++;
        }
        if(thuannghich(array[i])){
            check_TN++;
        }
        if(chinhphuong(array[i])){
            check_CP++;
        }
        if(sum_SNT(array[i])){
            check_sum_SNT++;
        }
        
    }
    cout << check_SNT << endl;
    cout << check_TN << endl;
    cout << check_CP << endl;
    cout << check_sum_SNT;
    return 0;
}
