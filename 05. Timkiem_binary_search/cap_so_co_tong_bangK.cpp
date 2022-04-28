// Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng bằng k.

// Input Format

// Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

// Constraints

// 2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

// Output Format

// In ra số lượng cặp số có tổng bằng k

// Sample Input 0

// 4 4
// 2 2 2 2
// Sample Output 0

// 6

#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    if( a != b) return a < b;
    else return a;
}
int first_pos(int a[], int left_pos, int right_pos, int X){
    int res = -1;
    while(left_pos <= right_pos){
        int mid_pos = (left_pos + right_pos) / 2;
        if(a[mid_pos] == X){
            res = mid_pos;
            right_pos = mid_pos - 1;
        }
        else if( a[mid_pos] > X){
            right_pos = mid_pos - 1;
        }
        else left_pos = mid_pos + 1;
    }
    return res;
}

int end_pos(int a[], int left_pos, int right_pos, int X){
    int res = -1;
    while(left_pos <= right_pos){
        int mid_pos = (left_pos + right_pos) / 2;
        if(a[mid_pos] == X){
            res = mid_pos;
            left_pos = mid_pos + 1;
        }
        else if( a[mid_pos] > X){
            right_pos = mid_pos - 1;
        }
        else left_pos = mid_pos + 1;
    }
    return res;
}

int number_occurrences(int a[], int left_pos, int right_pos, int X){
    int F = first_pos(a, left_pos, right_pos, X);
    int E = end_pos(a, left_pos, right_pos, X);
    if( F != -1 && E != -1) return (E-F)+1;
    else return -1;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for( int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n, cmp);
    int count = 0;
    for( int i = 0; i < n; i++){
        if(number_occurrences(a, a[i+1], a[n-1], (k - a[i])) != -1) count += number_occurrences(a, a[i+1], a[n-1], (k - a[i]));
    }
    cout << count;
    return 0;
}