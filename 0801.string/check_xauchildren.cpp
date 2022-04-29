// Cho 2 xâu S và T chỉ bao gồm các chữ cái in hoa, in thường và dấu cách. Hãy kiểm tra xem xâu T có phải là xâu con của xâu S hay không?

// Input Format

// Dòng đầu tiên là xâu S. Dòng thứ 2 là xâu T.

// Constraints

// 1≤len(S)≤100000; 1≤len(T)≤100000;

// Output Format

// In ra YES nếu xâu T xuất hiện trong xâu S, ngược lại in ra NO.

// Sample Input 0

// aabcacbdaa
// cacb
// Sample Output 0

// YES

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    cin.ignore(1);
    string t; getline(cin, t);
    char t_begin = t[0], t_end = t[t.size() - 1];
    string tmp = "";
    int cnt = 0;
    for( int i = 0; i < s.size(); i++){
        cnt = 0;
        if(s[i] == t_begin){
            for( int ii = 0; ii < t.size(); ii++){
                if(s[i + ii] != t[ii]) break;
                else {
                    cnt++;
                    // cout << cnt << " - ";
                }
            }
            if(cnt == t.size()) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}