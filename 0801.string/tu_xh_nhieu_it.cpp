// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách. Hãy tìm từ có số lần xuất hiện nhiều nhất và ít nhất trong xâu, nếu có nhiều từ có cùng số lần xuất hiện nhiều nhất hoặc ít nhất thì chọn từ có thứ tự từ điển lớn nhất làm kết quả.

// Input Format

// Dòng duy nhất chứa xâu S.

// Constraints

// 1≤len(S)≤100000;

// Output Format

// Dòng đầu tiên in ra từ có số lần xuất hiện nhiều nhất. Dòng thứ 2 in ra từ có số lần xuất hiện ít nhất.

// Sample Input 0

// aa bb cc aa bb aa aa cc
// Sample Output 0

// aa 4
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
    map<string, int> mp_tx;
    while(ss >> word){
        mp_tx[word]++;
    }
    pair<string, int> pr[mp_tx.size()];
    int tmp = 0;
    for(auto it = mp_tx.begin(); it != mp_tx.end(); it++){
        pr[tmp].first = (*it).first;
        pr[tmp].second = (*it).second;
        tmp++;
    }
    sort(pr, pr + tmp, cmp);
    // for(int i = 0; i < tmp; i++) {
    //      cout << pr[i].first << " " << pr[i].second << endl;
    // }
    // cout << endl;
    vector <string> vt_max;
    int max = pr[tmp - 1].second;
    for(int i = tmp - 1; i >= 0; i--) {
         if(pr[i].second == max) vt_max.push_back(pr[i].first);
    }
    sort(begin(vt_max), end(vt_max));
    // for(int i = 0; i < vt_max.size(); i++) {
    //      cout << vt_max[i] << " " << mp_tx[vt_max[i]] << endl;
    // }
    // cout << endl;

    vector <string> vt_min;
    int min = pr[0].second;
    for(int i = 0; i < tmp; i++) {
         if(pr[i].second == min) vt_min.push_back(pr[i].first);
    }
    sort(begin(vt_min), end(vt_min));
    // for(int i = 0; i < vt_min.size(); i++) {
    //      cout << vt_min[i] << " " << mp_tx[vt_min[i]] << endl;
    // }
    // cout << endl;

    cout << vt_max[vt_max.size() - 1] << " " << mp_tx[vt_max[vt_max.size() - 1]] << endl;
    cout << vt_min[vt_min.size() - 1] << " " << mp_tx[vt_min[vt_min.size() - 1]] << endl;
    
    return 0;
}