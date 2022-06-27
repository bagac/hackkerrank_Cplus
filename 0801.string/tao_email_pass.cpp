#include <bits/stdc++.h>
using namespace std;

string convert_name(string a){
    string tmp_ho = "";
    string tmp_ten = "";
    for( size_t i = 0; i < a.size(); i++){
        if(i < a.size() - 1) tmp_ho += tolower(a[i]);
        else tmp_ten = tolower(a[i]);
    }
    return tmp_ten + tmp_ho + "@xyz.edu.vn";
}

string convert_day(string a){
    string day = "", month = "", year = "";
    int cnt = 1;
    for( size_t i = 0; i < a.size(); i++){
        if(a[i] == '/') cnt++;
        if(cnt == 1 && a[i] != '/'){
            day += a[i];
        }
        else if( cnt == 2 && a[i] != '/'){
            month += a[i];
        }
        else if( cnt == 3 && a[i] != '/'){
            year += a[i];
        }
    }
    int day_i = stoi(day); 
    if(day_i < 10) day = '0' + day;
    int month_i = stoi(month);
    if(month_i < 10) month = '0' + month;
    return day + "/" + month + "/" + year;
}

int main(){

    int number; cin >> number;

    vector <string> vt[number];
    vector <string> ans[number];
    int tmp = 0;
    while(number != 0){
        cout << "ok 2" << endl;
        cin.ignore(1);
        string s; getline(cin, s);
        stringstream ss(s);
        string word;
        while( ss << word ){
            vt[tmp].push_back(word);
            cout << "ok 1" << endl;
        }
        string new_vt = "";
        for( size_t i = 0; i < vt[tmp].size(); i++) {
            if(i <= vt[tmp].size() - 2) new_vt += convert_name(vt[tmp][i]);
            else new_vt += convert_day(vt[tmp][i]);
            ans[tmp].push_back(new_vt);
            cout << "ok " << new_vt << endl;
        }
        tmp++;
        number--;
    }
    // for( int i = 0; i < tmp; i++){
    //     for(int ii = 0; ii < ans[tmp].size(); ii++){
    //         cout << ans[i][ii];
    //     }
    // }
    return 0;
}