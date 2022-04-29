// Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy sắp xếp các từ thuận nghịch khác nhau trong xâu theo thứ tự từ chiều dài tăng dần, nếu 2 từ thuận nghịch có cùng chiều dài thì từ nào xuất hiện trước sẽ được in ra trước.

// Input Format

// Dòng duy nhất chứa xâu S.

// Constraints

// 1≤len(S)≤100000;

// Output Format

// In ra các từ theo thứ tự sắp xếp yêu cầu, các từ được in cách nhau một dấu cách.

// Sample Input 0

// php aba aaaa nguyen huu hoc pop
// Sample Output 0

// php aba pop aaaa
#include <bits/stdc++.h>
using namespace std;
bool check_thuannghich(string s){

        int l = 0, r = s.size() - 1;
        while(l <= r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
}
bool cmp(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b){
    if(a.second.first != b.second.first) return a.second.first < b.second.first;
    else return a.second.second < b.second.second;
}
int main(){

    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp_size;
    map<string, int> mp_tt;
    map<string, int> mp_tx;
    int cnt = 0;
    while(ss >> word){
        if(check_thuannghich(word)){
            if(mp_tt.count(word) == 0) {
                mp_tt[word] = cnt;
                cnt++;
            }
            mp_size[word] = word.size();
            mp_tx[word]++;
        }
    }
    // for(auto x:mp_size) cout << x.first << " " << x.second << endl;
    // cout << endl;
    
    pair<string, pair<int, int>> pr[cnt];
    int tmp = 0;
    for(auto it = mp_size.begin(); it != mp_size.end(); it++){
        pr[tmp].first = (*it).first;
        pr[tmp].second.first = (*it).second;
        pr[tmp].second.second = mp_tt[(*it).first];
        tmp++;
    }
    sort(pr, pr + tmp, cmp);
    for(auto x:pr) cout << x.first << " ";
        
//     for(auto x:mp_tt) cout << x.first << " " << x.second << endl;
//     cout << endl;
    
//     for(auto x:mp_tx) cout << x.first << " " << x.second << endl;
//     cout << endl;

    return 0;
}