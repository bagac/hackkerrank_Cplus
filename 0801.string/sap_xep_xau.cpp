#include <bits/stdc++.h>
#include <set>
#include <map>


using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    set<string> ans1;
    pair<string, int> ans2;
    map<string, int> mp;
    while(ss >> word){
        ans1.insert(word);
        string tmp = word;
        mp[word] = tmp.size();
    }
   for(auto x:mp) cout << x.first << " " << x.second << endl; 
   for( int i = 0; i < ans1.size(); i++){
       ans2.first = an
   }
    // for(auto x:ans1) cout << x << " ";
    return 0;
}