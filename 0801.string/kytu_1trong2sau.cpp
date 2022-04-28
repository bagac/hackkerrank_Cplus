// Cho 2 xâu kí tự S1 và S2 chỉ bao gồm chữ cái in hoa và in thường, hãy tìm các kí tự xuất hiện trong xâu S1 mà không xuất hiện trong xâu S2, và các kí tự chỉ xuất hiện trong xâu S2 mà không xuất hiện trong xâu S1. Các ký tự được in ra theo thứ tự từ điển và chỉ liệt kê mỗi ký tự một lần.

// Input Format

// Dòng đầu tiên là xâu S1. Dòng thứ 2 là xâu S2.

// Constraints

// 1≤len(S1)≤100000; 1≤len(S2)≤100000.

// Output Format

// Dòng đầu tiên in ra các ký tự chỉ xuất hiện trong S1 mà không xuất hiện trong S2. Dòng thứ 2 in ra các ký tự chỉ xuất hiện trong S2 mà không xuất hiện trong S1.

// Sample Input 0

// fAOxTUeAIs
// aVUkULeRYw
// Sample Output 0

// AIOTfsx
// LRVYakw

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