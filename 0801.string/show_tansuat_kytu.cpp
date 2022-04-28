// Cho một xâu kí tự, hãy đếm tần suất xuất hiện của các kí tự trong xâu và in ra theo yêu cầu.

// Input Format

// Xâu kí tự S chỉ bao gồm chữ cái in hoa và in thường.

// Constraints

// 1≤len(S)≤100000.

// Output Format

// Đầu tiên in ra các ký tự và tần suất xuất hiện của các ký tự ở trong xâu theo thứ tự từ điển tăng dần, sau đó cách ra một dòng và in ra tần suất xuất hiện của các ký tự theo thứ tự xuất hiện trong xâu(chú ý mỗi kí tự chỉ in 1 lần)

// Sample Input 0

// abcdabcdA
// Sample Output 0

// A 1
// a 2
// b 2
// c 2
// d 2

// a 2
// b 2
// c 2
// d 2
// A 1

#include <bits/stdc++.h>
#include <map>
using namespace std;

bool cmp(char a, char b){
    return a > b;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string len; getline(cin, len);
    map<char, int> mp;
    vector<char> vt;
    for( size_t i = 0; i < len.size(); i++){
        mp[len[i]]++;
        vt.push_back(len[i]);
    }
    for(auto x:mp){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for( auto x:vt){
        if(mp[x] != 0) {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;  
        }
    }
    return 0;
}