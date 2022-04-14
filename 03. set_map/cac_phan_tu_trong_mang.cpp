
// Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là đưa ra mảng đã được sắp xếp bao gồm các chữ số của mỗi phần tử trong A[]. Ví dụ A[] = {110, 111, 112, 113, 114 }ta có kết quả là {0, 1, 2, 3, 4}.

// Input Format

// Dòng đầu tiên đưa vào n là số phần tử của mảng A[]; Dòng tiếp theo là n số A[i] ; Các số được viết cách nhau một vài khoảng trống.

// Constraints

// 1<=n<=10^5; 0<=A[i]<=10^6;

// Output Format

// In ra các chữ số xuất hiện trong các số của mảng A theo thứ tự tăng dần

// Sample Input 0

// 3
// 976117 988196 993766 
// Sample Output 0

// 1 3 6 7 8 9 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n];
    set<int> s;
    for(int i = 0; i < n; i++){
        cin >> a[n];
        while(a[n]){
            int tmp = a[n] % 10;
            a[n] /= 10;
            s.insert(tmp);
        }
    }
    for (auto x:s){
        cout << x << " ";
    }
    return 0;
}
