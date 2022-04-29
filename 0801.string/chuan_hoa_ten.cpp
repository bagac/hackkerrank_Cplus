// Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người bằng cách viết hoa chữ cái đầu tiên của từng từ và viết thường các chữ cái còn lại. Xâu tiếp theo là ngày sinh của người này, bao gồm ngày tháng năm phân cách nhau bằng dấu '/', hãy chuẩn hóa ngày sinh của người này về đúng dạng dd/mm/yyyy.

// Input Format

// Dòng đầu tiên là tên người; Dòng thứ 2 là ngày sinh;

// Constraints

// Xâu kí tự tên người có không quá 2000 kí tự; Xâu ngày sinh có không quá 10 kí tự. Dữ liệu đảm bảo có dấu '/' giữa ngày, tháng, năm.

// Output Format

// Dòng đầu tiên in ra tên người sau khi chuẩn hóa. Dòng thứ 2 in ra ngày sinh sau khi đưa về dạng chuẩn dd/mm/yyyy.

// Sample Input 0

// hoang  dinh NAm
// 20/5/1999
// Sample Output 0

// Hoang Dinh Nam
// 20/05/1999

#include <bits/stdc++.h>
using namespace std;

string convert_name(string a){
    for( size_t i = 0; i < a.size(); i++){
        if(i == 0) a[i] = toupper(a[i]);
        else{
            a[i] = tolower(a[i]);
        }
    }
    return a;
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
    string s; getline(cin, s);
    stringstream ss(s);
    string word_s;
    vector<string> name;
    while(ss >> word_s){
        name.push_back(word_s);
    }

    string d; getline(cin, d);
    stringstream dd(d);
    string word_d;
    vector<string> day;
    while(dd >> word_d){
        day.push_back(word_d);
    }
    // cout << endl;
    for( size_t i = 0; i < name.size(); i++) {

        cout << convert_name(name[i]) << " ";
    }
    cout << endl;
    for( size_t ii = 0; ii < day.size(); ii++) cout << convert_day(day[ii]) << " ";
    return 0;
}