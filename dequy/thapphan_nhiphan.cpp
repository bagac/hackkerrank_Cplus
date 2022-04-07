// Cho một số nguyên không âm N, hãy in ra dạng biểu diễn nhị phân của số N.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// Biểu diễn nhị phân của số nguyên N.

// Sample Input 0

// 8
// Sample Output 0

// 1000

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long D2B_convert(long long n){
    if(n == 0 || n == 1) return n;
    else return n % 2 + 10 * (D2B_convert(n / 2));
}

long long D2B_convert_01(long long dec){
    long rem,i=1,sum=0;
    do
    {
        rem=dec%2;
        sum=sum + (i*rem);
        dec=dec/2;
        i=i*10;
    }while(dec>0);
    return sum;
}

void D2B_convert_02(long long n){
    if (n == 0) {
        return;   // điều kiện dừng
    }
    else{
        long long tmp = n % 2;  // phần dư
        D2B_convert_02(n / 2);   /// lấy phần nguyên
        cout << tmp;
    }

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    if(n == 0) cout << n;
    else D2B_convert_02(n);
    return 0;
}


