// Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chọn.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^3; 0<=A[i]<=10^9

// Output Format

// In ra các bước của thuật toán sắp xếp chọn

// Sample Input 0

// 4
// 5 7 3 2
// Sample Output 0

// Buoc 1: 2 7 3 5
// Buoc 2: 2 3 7 5
// Buoc 3: 2 3 5 7

#include <bits/stdc++.h>

using namespace std;

void show_array(int a[], int n){
    for( int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void selection_sort(int a[], int n){
    for( int i = 0; i < n-1; i++){
        int min_pos = i;
        for( int k = i+1; k < n; k++){
            if(a[k] < a[min_pos]) min_pos = k;
        }
        swap(a[i], a[min_pos]);
        cout << "Buoc " << i+1 << ": ";
        show_array(a, n);
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for( int i = 0; i < n; i++){
        cin >> a[i];
    }
    selection_sort(a, n);
    return 0;
}