// Cho một xâu kí tự S chỉ bao gồm các kí tự , hãy in ra các hoán vị của các kí tự khác nhau trong S theo thứ tự từ điển tăng dần.

// Input Format

// 1 dòng chứa xâu S

// Constraints

// 1<=len(S)<=10;

// Output Format

// In ra các hoán vị của xâu S

// Sample Input 0

// lqk
// Sample Output 0

// klq
// kql
// lkq
// lqk
// qkl
// qlk
#include <bits/stdc++.h>
using namespace std;
int ok;
char a[1001];
void sinh(char a[], int n){
    int i = n - 1;
    while( i >= 1 && a[i] > a[i+1]) i--;
    if( i == 0){
        ok = 0;
    }
    else{
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while(l < r){
            swap(a[l], a[r]);
            l++;
            r--;
        }
        
    }
}

// next_permutation(), prev_c
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s; cin >> s;
    ok = 1;
    set<char> se;
    for( int i = 0; i < s.size(); i++) se.insert(s[i]);
    string tmp = "";
    for(auto x:se) tmp += x;
    int n = tmp.size();
    for( int i = 1; i <= n; i++){
        a[i] = tmp[i-1];
    }
    while(ok){
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
        sinh(a, n);
    }
    return 0;
}