// Cho một xâu kí tự, hãy tìm kí tự có số lần xuất hiện nhiều nhất trong xâu và kí tự có số lần xuất hiện nhiều nhất ở trong xâu. Trong trường hợp có nhiều kí tự có cùng số lần xuất hiện lớn nhất hoặc nhỏ nhất thì in ra kí tự có thứ tự từ điển lớn nhất.

// Input Format

// Xâu kí tự S chỉ bao gồm chữ cái in hoa và in thường.

// Constraints

// 1≤len(S)≤100000.

// Output Format

// Dòng đầu tiên in ra kí tự có số lần xuất hiện nhiều nhất, trong trường hợp có nhiều kí tự có cùng số lần xuất hiện nhiều nhất thì chọn kí tự có thứ tự từ điển lớn nhất. Dòng thứ 2 in ra kí tự có số lần xuất hiện nhỏ nhất nhất, trong trường hợp có nhiều kí tự có cùng số lần xuất hiện nhỏ nhất thì chọn kí tự có thứ tự từ điển lớn nhất.

// Sample Input 0

// qEQtEEuAQcSWfFRfWRnKKeCZeUYlSGrXWvOGqEXsWMxLRtQPxBMtEHdPGbGKvKFiQLxUSuSZtMIjXEhUZtAZdBInYLeHWfWUwCVo
// Sample Output 0

// W 6
// w 1


#include <bits/stdc++.h>
#include <map>
using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b){
    return a.second > b.second;
}

bool cmp_vt(char a, char b){
    return a < b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string len; getline(cin, len);
    map<char, int> mp;
    pair<char, int> pr[len.size()];
    for( size_t i = 0; i < len.size(); i++){
        mp[len[i]]++;
    }
    int cnt = 0;
    for( auto x:mp){
        pr[cnt].first = x.first;
        pr[cnt].second = x.second;
        cnt++;
    }
    sort(pr, pr+cnt, cmp);
    int max_vl = pr[0].second, min_vl = pr[cnt-1].second;
    // cout << "max = " << max_vl << endl;
    // cout << "min = " << min_vl << endl;
    map <char, int> vt_max;
    map <char, int> vt_min;
    for( int i = 0; i < cnt; i++){
        if( pr[i].second == max_vl) vt_max[pr[i].first] = pr[i].second;
        if( pr[i].second == min_vl) vt_min[pr[i].first] = pr[i].second;
    }
    cout << (*next(vt_max.end(), - 1)).first << " " << (*next(vt_max.end(), - 1)).second << endl;
    cout << (*next(vt_min.end(), - 1)).first << " " << (*next(vt_min.end(), - 1)).second << endl;
    // cout << "pr_max      " << endl;
    // for( auto x:vt_max) cout << x.first << " " << x.second << endl;
    // cout << "pr_min      " << endl;
    // for( auto x:vt_min) cout << x.first << " " << x.second << endl;
    
    return 0;
}