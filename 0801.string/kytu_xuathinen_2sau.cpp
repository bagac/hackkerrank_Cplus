// Cho 2 xâu kí tự S1 và S2, hãy in ra các kí tự xuất hiện ở cả 2 xâu theo thứ tự từ điển, chú ý mỗi kí tự chỉ liệt kê một lần. Sau đó tiếp tục liệt kê các kí tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển.

// Input Format

// Dòng đầu tiên là xâu S1. Dòng thứ 2 là xâu S2. Các ký tự trong 2 xâu chỉ bao gồm chữ cái in hoa hoặc in thường.

// Constraints

// 1≤len(S1)≤100000; 1≤len(S2)≤100000.

// Output Format

// Dòng 1 in ra các ký tự xuất hiện ở cả 2 xâu theo thứ tự từ điển tăng dần. Dòng 2 in ra các ký tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển tăng dần.

// Sample Input 0

// nTOhOGvRBk
// bUJtZSoONh
// Sample Output 0

// Oh
// BGJNORSTUZbhknotv

#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2; 
    getline(cin, s1);
    getline(cin, s2);
    set<char> ans1, ans2;
    for( size_t i = 0; i < s1.size(); i++){
        ans1.insert(s1[i]);
    }
    for( size_t i = 0; i < s2.size(); i++){
        ans2.insert(s2[i]);
    }

    for( size_t i = 0; i < s2.size(); i++){
        ans1.erase(s2[i]);
    }
    for( size_t i = 0; i < s1.size(); i++){
        ans2.erase(s1[i]);
    }

    
    for( auto it = ans1.begin(); it != ans1.end(); it++) cout << *it;
    cout << endl;
    for( auto it = ans2.begin(); it != ans2.end(); it++) cout << *it;
    cout << endl;
    return 0;
}