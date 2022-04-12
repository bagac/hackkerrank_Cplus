// Cho 2 mảng số nguyên a và b gồm n và m phần tử, các phần tử trong mảng là đôi một khác nhau, các phần tử trong 2 mảng đã được sắp xếp theo thứ tự tăng dần. Hãy tìm mảng giao và mảng hợp của 2 mảng. Độ phức tạp mong muốn O(n+m)

// Input Format

// Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.

// Constraints

// 1≤n,m≤10^7; -10^7≤ai≤10^7

// Output Format

// Dòng đầu tiên in ra mảng hợp của 2 mảng Dòng thứ 2 in ra mảng giao của 2 mảng

// Sample Input 0

// 4 5
// 1 2 3 4
// 2 3 5 6 7
// Sample Output 0

// 1 2 3 4 5 6 7
// 2 3

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n, m;
    cin >> n >> m;
    multiset<long long> n_set;
    set<long long> m_set;
    set<long long> hop_set;
    set<long long> giao_set;
    multiset<long long> hop_giao_set;
    for ( int i = 0; i < (n+m); i++){
        if( i < n){
            long long x; cin >> x;
            n_set.insert(x);
        }
        // hop_set = n_set;
        if( i == n ){
            hop_giao_set = n_set;
            hop_giao_set.insert(10101);
        }
        if( i > n && i <= (n+m)){
            long long y; cin >> y;
            m_set.insert(y);
            hop_giao_set.insert(y);
            auto it = n_set.find(y);
            if(it != n_set.end()) giao_set.insert(y);

        }
    }
    for (auto size = hop_giao_set.begin(); size != hop_giao_set.end(); size++){
        if(*size == 10101) cout << "\n";
        else cout << *size << " ";
    }
    return 0;
}