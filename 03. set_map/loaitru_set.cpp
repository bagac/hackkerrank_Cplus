// Cho mảng A[] và B[] có N và M phần tử là các số nguyên, hãy tìm các phần tử xuất hiện trong mảng 1 mà không xuất hiện trong mảng 2.

// Input Format

// Dòng đầu tiên là N và M; Dòng thứ 2 là N số của mảng A[]; Dòng thứ 3 là M số của mảng B[];

// Constraints

// 1<=N, M<=10^6; -10^9<=A[i], B[i] <= 10^9;

// Output Format

// In ra các số xuất hiện trong mảng 1 mà không xuất hiện trong mảng 2 theo thứ tự từ bé đến lớn, mỗi giá trị thỏa mãn chỉ liệt kê 1 lần.

// Sample Input 0

// 3 4
// 1 2 3
// 1 2 4 5
// Sample Output 0

// 3

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long n, m; cin >> n >> m;
    set <long long> n_set;
    set <long long> m_set;
    for( long long i = 0; i < n; i++){
        int x; cin >> x;
        n_set.insert(x);
    }
    for( long long ii = 0; ii < m; ii++){
        int y; cin >> y;
        m_set.insert(y);
    }
    for(auto it : n_set){
        if(m_set.find(it) == m_set.end()) cout << it << " ";
    }
    
    return 0;
}
