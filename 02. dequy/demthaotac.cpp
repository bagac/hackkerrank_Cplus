// Cho số nguyên dương N. Bạn được thực hiện 3 thao tác sau đây: 1. Lấy N chia cho 2 nếu N chia hết cho 2. 2. Lấy N chia hết cho 3 nếu N chia hết cho 3. 3. Giảm N đi 1 đơn vị. Hãy đếm số thao tác ít nhất để biến đổi N về 1.

// Input Format

// Số nguyên dương N.

// Constraints

// 1≤n≤50

// Output Format

// In ra số thao tác tối thiểu cần thực hiện.

// Sample Input 0

// 38
// Sample Output 0

// 5

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int thaotac( int n, int cnt){
    if( n == 1) return cnt;
    int count_tt_c1 = 0, count_tt_c2 = 1e9 + 1, count_tt_c3  = 1e9 + 1;
    count_tt_c1 = thaotac(n-1, cnt+1);
    if( n % 2 == 0) {
        count_tt_c2 = thaotac((n/2), cnt+1);
    }
    if( n % 3 == 0) {
        count_tt_c3 = thaotac((n/3), cnt+1);
    }
    cout <<   count_tt_c1 << " || " << count_tt_c2 << " || " << count_tt_c3 << endl;
    return min({count_tt_c1, count_tt_c2, count_tt_c3});
}

int rec(int n, int cnt){
    if(n == 1) return cnt;
    int c1, c2 = 1e9 + 1, c3 = 1e9 + 1;
    c1 = rec(n - 1, cnt + 1);
    if(n % 2 == 0) c2 = rec(n / 2, cnt + 1);
    if(n % 3 == 0) c3 = rec(n / 3, cnt + 1);
    cout <<   c1 << " || " << c2 << " || " << c3 << endl;
    return min({c1, c2, c3});
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    // cout << rec(n, 0);
    cout << thaotac(n, 0) << endl;
    return 0;
}
