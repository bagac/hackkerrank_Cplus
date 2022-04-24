// Trong lớp học của Tèo có các thanh domino hình chữ nhật có chiều rộng a và có chiều cao b. Tèo hiện là học sinh lớp 1, thầy giáo có giao cho Tèo một bài toán đó là hãy tìm 1 bảng hình vuông có cạnh nhỏ nhất sao cho có thể xếp n thanh domino vào hình vuông này. Tèo không nhất thiết phải xếp kín cái bảng hình vuông này nhưng không được phép xoay ngang thanh domino. Dưới đây là một ví dụ về cách xếp thanh domino có a = 2, b = 3 vào bảng hình vuông có cạnh 9

// image

// Input Format

// 3 số a, b, n trên 1 dòng

// Constraints

// 1<=n,a,b<=10^9;

// Output Format

// In ra chiều dài cạnh của hình vuông nhỏ nhất tìm được.

// Sample Input 0

// 2 3 10
// Sample Output 0

// 9
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// di tim phan tu lon hon x dau tien
int main()
{
    ll a , b , n ; cin >> a >> b >> n;
    ll l = 0 , r = max(a , b) * n;
    ll res= 0;
    while(l <= r)
    {
        ll mid = (l + r) / 2;
        ll x = mid / a;
        ll y = mid / b;
        if(x * y >= n)
        {
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << res;
}
