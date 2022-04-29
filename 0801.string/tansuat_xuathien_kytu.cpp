// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy đếm xem mỗi từ trong xâu xuất hiện bao nhiêu lần, đầu tiên hãy liệt kê các từ trong xâu kèm theo tần suất của mỗi từ theo thứ tự từ điển, sau đó liệt kê các từ trong xâu theo thứ tự xuất hiện.

// Input Format

// Dòng duy nhất chứa xâu S.

// Constraints

// 1≤len(S)≤100000;

// Output Format

// Đầu tiên in ra các từ trong xâu và tần suất của nó theo thứ tự từ điển. Sau đó bỏ trống 1 dòng và in ra các từ trong xâu và tần suất của nó theo thứ tự xuất hiện trong xâu.

// Sample Input 0

// bb aa bb cc aa bb cc
// Sample Output 0

// aa 2
// bb 3
// cc 2

// bb 3
// aa 2
// cc 2

#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int> a, pair<string, int> b){
    return a.second < b.second;
}
int main(){

    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp_tt;
    map<string, int> mp_tx;
    int cnt = 0;
    while(ss >> word){
        if(mp_tt.count(word) == 0) {
            mp_tt[word] = cnt;
            cnt++;
        }
        mp_tx[word]++;
        
    }
    for(auto x:mp_tx) cout << x.first << " " << x.second << endl;
    cout << endl;
    pair<string, int> pr[cnt];
    int tmp = 0;
    for(auto it = mp_tt.begin(); it != mp_tt.end(); it++){
        pr[tmp].first = (*it).first;
        pr[tmp].second = (*it).second;
        tmp++;
    }
    sort(pr, pr + tmp, cmp);
    for(auto x:pr) cout << x.first << " " << mp_tx[x.first] << endl;
    return 0;
}