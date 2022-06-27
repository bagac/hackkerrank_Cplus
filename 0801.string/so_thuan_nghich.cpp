// Một số được coi là số đẹp nếu nó là số thuận nghịch và chứa ít nhất 1 chữ số 6. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

// Input Format

// Số nguyên dương N

// Constraints

// N có không quá 1000 chữ số.

// Output Format

// In ra YES nếu N là số đẹp, ngược lại in ra NO.

// Sample Input 0

// 6433987866217635596629171229463963223693649221719266955367126687893346
// Sample Output 0

// YES
#include <bits/stdc++.h>
using namespace std;

int checkTN(string s){
    int l = 0, r = s.size() - 1;
    bool stt = false;
    while( l < r ){
        if( s[l] != s[r] ) return false;
        if( s[l] == '6' ) stt = true; 
        r--;
        l++;
    }
    return stt;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s; cin >> s;
    if(checkTN(s)) cout << "YES";
    else cout << "NO";
    // return 0;
}