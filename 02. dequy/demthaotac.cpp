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

int thaotac_01(int n){
    if( n == 1) return 0;
    long long c1 = 1e9, c2 = 1e9, c3 = 1e9; // lấy giá trị so sánh để tìm min của bước tính
    if( n % 2 == 0) c1 = 1 + thaotac_01( n/2 );
    if( n% 3 == 0) c2 = 1 + thaotac_01( n/3 );
    if( n > 1) c3 = 1 + thaotac_01( n -1 );
    return min ( c1, min (c2,c3));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    cout << thaotac_01(n) << endl;
    return 0;
}
