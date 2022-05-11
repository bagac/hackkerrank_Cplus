#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();
    else return a < b;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; getline(cin, s);
    string word;
    stringstream ss(s);
    map<string, int> mp;
    while(ss >> word){
        for(char &x:word){
            x = tolower(x);
        }
        
        mp[word] = 1;
    }
    
    string s2; getline(cin, s2);
    string word2;
    stringstream ss2(s2);
    while( ss2 >> word2 ){
        for(char &x:word2){
            x = tolower(x);
        }
        mp[word2]++;
    }
    vector <string> vt;
    for(auto x:mp){
        if(x.second >= 2) {
            vt.push_back(x.first);
        }
    }
    sort(begin(vt), end(vt), cmp);
    return 0;
}
