// Theo quan niệm của người Việt, số 7 là một số không may mắn, vì thế bạn được yêu cầu xóa cụm 111 trong xâu nhị phân ban đầu, cụm 111 chính là biểu diễn ở dạng nhị phân của số 7.

// Input Format

// Xâu nhị phân chỉ bao gồm số 0 và 1.

// Constraints

// Xâu có độ dài không quá 1000.

// Output Format

// In ra xâu sau khi xóa cụm 111, chú ý khi bạn xóa 1 cụm 111 khỏi xâu ban đầu, các kí tự ở bên trái và bên phải cụm 111 này lại trở thành các kí tự liền kề nhau. Nếu sau khi xóa xâu trở thành rỗng thì in ra "EMPTY";

// Sample Input 0

// 1000111
// Sample Output 0

// 1000
// Sample Input 1

// 111
// Sample Output 1

// EMPTY
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s; cin >> s;
    vector<char> ans;
    vector<int> tmp;
    if(s == "111") cout << "EMPTY";
    else{
        for( size_t i = 0; i < s.size(); i++){
            if( s[i] == '1' && s[i+1] == '1' && s[i+2] == '1') {
               tmp.push_back(i);
               i = i + 3;
            }
        }
        for( int i = 0; i < tmp.size(); i++){
            s.erase(tmp[i], 3);
        }
        cout << s;
    }
    
    return 0;
}