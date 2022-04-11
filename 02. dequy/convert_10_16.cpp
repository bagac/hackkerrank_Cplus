// Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// Biểu diễn hệ 16 của số nguyên N.

// Sample Input 0

// 995
// Sample Output 0

// 3E3
// cách đổi 
// Ví dụ: Chuyển (960) 10 thành hệ thập lục phân.

// Giải pháp: Sau bước này,

// Đầu tiên, chia 960 cho 16.
// 960 ÷ 16 = 60 và phần còn lại = 0

// Một lần nữa, chia thương số 60 cho 16.
// 60 ÷ 16 = 3 và dư 12.

// Một lần nữa chia 3 cho 16, sẽ để lại thương = 0 và dư = 3.
// Bây giờ lấy phần còn lại theo thứ tự ngược lại và thay thế giá trị thập lục phân tương đương cho chúng, chúng ta nhận được,
// 3 → 3, 12 → C và 0 → 0

// Do đó, (960) 10 = (3C0) 16

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

char array_16[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char convert_10_16(int n){
    return array_16[n];
}

void dequy_convert10to16(long long n){
    if ( n == 0 ) return;
    dequy_convert10to16(n / 16);
    cout << convert_10_16(n % 16);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    if( n == 0 ) cout << 0;
    else dequy_convert10to16(n);
    return 0;
}
