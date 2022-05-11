#include <bits/stdc++.h>
using namespace std;

string permutation_func(string s){
    string old_s = s;
    string ans = "";
    string NO_ANS = "no answer";
    int n = s.size();
    int i = n - 1;
    while( i > 0 ){
        i = n - 1;
        while( s[i] < s[i - 1]) i--;
        if( i > 0 ){
            int k = 0;
            for( k = n - 1; k >= i; k-- ){
                if( s[k] > s[i - 1]) break;
            }
            swap( s[k], s[i - 1]);
            for( int t = 0; t < n; t++){
                ans += s[t];
            }
            i = 0;
        }
    }
    if( old_s == ans || ans == "" ) return NO_ANS;
    else return ans;
    return ans;
}
int main(){
    int n; cin >> n;
    cin.ignore();
    string s = "";
    vector <string> vt;
    for(int i = 0; i < n; i++){
        getline(cin, s);
        vt.push_back(permutation_func(s));
    }
    cout << endl;
    for( int i = 0; i < vt.size(); i++){
        cout << vt[i] << endl;
    } 
}