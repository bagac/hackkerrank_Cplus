#include <bits/stdc++.h>

using namespace std;

int main(){

    string s; getline(cin, s);
    int chucai = 0, chuso = 0, datbiet = 0;
    for( int i = 0; i < s.size(); i++){
        if(isalpha(s[i])) ++chucai;
        else if(isdigit(s[i])) ++chuso;
        else ++datbiet;
    }
    cout << chucai << " " << chuso << " " << datbiet << endl;
}