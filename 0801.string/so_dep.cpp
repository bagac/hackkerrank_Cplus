// Một số được coi là số đẹp nếu nó có tất cả các chữ số là số nguyên tố và tổng các chữ số của nó cũng là số nguyên tố. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

// Input Format

// Số nguyên dương N

// Constraints

// N có không quá 1000 chữ số.

// Output Format

// In ra YES nếu N là số đẹp, ngược lại in ra NO.

// Sample Input 0

// 373
// Sample Output 0

// YES

#include <bits/stdc++.h>
using namespace std;

bool SNT(int n){
    if( n < 2) return false;
    else{
        for( int i = 0; i <= sqrt(n); i++){
            if( n % i == 0) return false;
        }
    }
    return true;
}

int main(){

    string s; cin >> s;
    int s_convert = stoi(s);
    
    return 0;
}