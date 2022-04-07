// Cho một số nguyên không âm N, hãy in ra chữ số đầu tiên của N.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// In ra chữ số đầu tiên của N.

// Sample Input 0

// 56721
// Sample Output 0

// 5

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Number_end = 0;
void show_first_number( long long n){
    if ( n == 0 ) return;
    else {
        int tmp = n % 10;
        Number_end = tmp;
        show_first_number(n / 10);

    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i = 0;
    long long n;
    cin >> n;
    if ( n < 10 ) cout << n;
    else {
        show_first_number(n);
        cout << Number_end;
    }
    
    return 0;
}


