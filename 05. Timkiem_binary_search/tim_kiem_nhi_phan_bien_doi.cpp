// Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. Hãy viết các hàm sau với độ phức tạp O(logN) : 1. Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1. 2. Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra -1. 3. Tìm vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1. 4. Tìm vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1. 5. Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.

// Input Format

// Dòng đầu tiên là số nguyên dương N và X Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^6; 0<=A[i],X<=10^6;

// Output Format

// In ra 5 dòng tương ứng với 5 kết quả của 5 hàm đề bài yêu cầu.

// Sample Input 0

// 10 1160
// 19 1600 2172 2921 3409 4185 4639 6098 6744 9192 
// Sample Output 0

// -1
// -1
// 1
// 1
// 0

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findFirstPos( int a[], int n, int x){
    int left = 0; int right = n-1; int res = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if( a[mid] > x){
            right = mid - 1;
        }
        else if( a[mid] == x) {
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return res;
}

int findEndPos( int a[], int n, int x){
    int left = 0; int right = n-1; int res = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if( a[mid] < x){
            left = mid + 1;
        }
        else if( a[mid] == x) {
            res = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return res;
}

int findUpperPos( int a[], int n, int x){
    int left = 0; int right = n-1; int res = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if( a[mid] >= x){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return res;
}

int findHigherPos( int a[], int n, int x){
    int left = 0; int right = n-1; int res = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if( a[mid] > x){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return res;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, x; cin >> n >> x;
    int a[n];
    for( int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << findFirstPos(a, n, x) << endl;
    cout << findEndPos(a, n, x) << endl;
    cout << findUpperPos(a, n, x) << endl;
    cout << findHigherPos(a, n, x) << endl;
    int l = findFirstPos(a, n, x);
    int r = findEndPos(a, n, x);
    if( l == -1 && r == -1) cout << 0;
    else cout << (r-l)+1;
    return 0;
}
