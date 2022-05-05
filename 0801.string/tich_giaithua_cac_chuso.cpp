// Axe chơi một trò chơi với Lina. Họ định nghĩa hàm F(x) với số x nguyên dương là tích giai thừa các chữ số của x. Ví dụ F(135) = 1! * 3! * 5! = 720. Đầu tiên, họ chọn một số a có n chữ số và có ít nhất một chữ số lớn hơn 1, có thể có chữ số không ở đầu. Sau đó họ tìm một số nguyên dương x lớn nhất thỏa mãn: 1. X không chứa chữ số 0 hoặc 1 2. F(x) = F(a) Hãy giúp Axe và Lina tìm ra được số đó.

// Input Format

// Dòng duy nhất chưa số a có n chữ số.

// Constraints

// 1<=n<=1000.

// Output Format

// In ra số X tìm được

// Sample Input 0

// 1234
// Sample Output 0

// 33222

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    string ans = "";
    for( size_t i = 0; i < s.size(); i++){
        if( s[i] == '0' || s[i] == '1') continue;
        else if ( s[i] == '4' ) ans += "322";
        else if ( s[i] == '6' ) ans += "53";
        else if ( s[i] == '8' ) ans += "7222";
        else if ( s[i] == '9' ) ans += "7332";
        else ans += s[i];
    }
    sort( begin(ans), end(ans), greater<char>());
    cout << ans << endl;
    return 0;
}