// Nhiệm vụ của bạn ở bài tập này là sinh ra các xâu chỉ bao gồm 2 kí tự A và B theo thứ tự từ điển giảm dần.

// Input Format

// Dòng duy nhất chứa số nguyên dương N là độ dài của xâu.

// Constraints

// 1<=N<=10;

// Output Format

// In ra các xâu AB, mỗi xâu được in trên 1 dòng.

// Sample Input 0

// 3
// Sample Output 0

// BBB
// BBA
// BAB
// BAA
// ABB
// ABA
// AAB
// AAA

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//ung dung sinh hoan vi nhi phan 0 - 1
char a[1001];
int n, ok;
void sinh(char a[], int n){
    int i = n;
    while(i >= 1 && a[i] == 'A'){
        a[i] = 'B';
        --i;
        
    }
    if( i == 0) ok = 0;
    else a[i] = 'A';
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; cin >> n;
    ok = 1;
    for( int i = 1; i <= n; i++){
        a[i] = 'B';
    }
    while(ok){
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh(a, n);
    }
    return 0; 
}