// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy đếm số lượng từ xuất hiện trong xâu S.

// Input Format

// Dòng duy nhất chứa xâu S.

// Constraints

// 1≤len(S)≤100000;

// Output Format

// In ra số lượng từ xuất hiện trong xâu S.

// Sample Input 0

// ngon ngu lap trinh java, python
// Sample Output 0

// 6

#include <bits/stdc++.h>
#include <set>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; 
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;
    while(ss >> word){
        cnt++;
    }
    cout << cnt;
}