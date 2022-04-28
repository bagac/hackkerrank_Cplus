#include <bits/stdc++.h>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; 
    getline(cin, s);
    stringstream ss(s);
    string word;
    map <string, int> mp;
    vector<string> vt;
    int cnt = 0;
    while(ss >> word){
        if(!mp.count(word)){
            mp[word] = cnt;
            cnt++;
        } 
        vt.push_back(word);
    }
    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first;
        if(it != next(mp.end(), - 1)) cout << " ";
        
    }
    cout << endl;
    for( int i = 0; i < cnt; i++){
        for(int ii = 0; ii < vt.size(); ii++){
            if(mp[vt[ii]] == i){
                cout << vt[ii];
                if(ii < vt.size() - 1) cout << " ";
                break;
            } 
        }
    }
    return 0;

}