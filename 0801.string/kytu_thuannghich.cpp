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
using ll = long long;
bool cmp(pair<string, pair<int, int>> a, pair<string, pair<int,int>> b){
    if( a.second.first != b.second.first ) return a.second.first < b.second.first;
    else return a.second.second < b.second.second;
}
bool check_thuannghich(string s){

        int l = 0, r = s.size() - 1;
        while(l <= r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; 
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;
    map<string, int> mp_tx;
    multimap<string, int> mp_tt;
    ll cnt = 0;
    while(ss >> word){
        if(check_thuannghich(word)){
            mp[word] = word.size();
            mp_tx[word]++;
            mp_tt.insert({word, cnt});
            cnt++;
        }
    }
    pair<string, pair<int,int>> pr[cnt];
    ll cnt_tt = 0;
    for( auto it = mp_tt.begin(); it != mp_tt.end(); it++){
        pr[cnt_tt] = make_pair((*it).first, make_pair(mp[(*it).first], (*it).second));
        // pr[cnt_tt].first = (*it).first;
        // pr[cnt_tt].second.first = mp[(*it).first];
        // pr[cnt_tt].second.second = (*it).second;
        cnt_tt++;
    }
    
    sort(pr, pr + cnt, cmp);
    for( ll i = 0; i < cnt; i++){
        cout << pr[i].first << " " << pr[i].second.first << " " << pr[i].second.second << endl;
    }
    return 0;
}