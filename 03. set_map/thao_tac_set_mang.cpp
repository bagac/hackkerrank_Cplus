// Cho dãy số A[] gồm có N phần tử, có 2 thao tác như sau : Thao tác 1 : Thêm 1 phần tử X vào mảng. Thao tác 2 : Xóa 1 phần tử X khỏi mảng. Trong trường hợp phần tử X không xuất hiện trong mảng, sẽ không thực hiện xóa, nếu trong mảng có nhiều phần tử X thì chỉ xóa đi 1 phần tử X trong mảng. Thao tác 3 : Truy vấn xem phần tử X có xuất hiện trong mảng hay không? Ban đầu mảng A có N phần tử, với các truy vấn phần tử X trong mảng, in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng thứ 2 gồm N số nguyên A[i]. Dòng thứ 3 là số lượng thao tác Q. Q dòng tiếp theo mỗi dòng là thông tin của một thao tác, gồm 2 số, số đầu tiên là loại thao tác, số tiếp theo là phần tử X trong thao tác.

// Constraints

// 1≤ N ≤ 10^4; 0 ≤ A[i], X ≤ 10^9; 1≤ Q ≤ 1000; 0 ≤ X ≤ 10^9;

// Output Format

// Đối với mỗi thao tác loại 3, in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.

// Sample Input 0

// 6
// 1 2 3 4 5 6
// 4
// 1 1
// 2 6
// 3 1
// 3 6
// Sample Output 0

// YES
// NO
// Explanation 0

// Ban đầu mảng có 6 phần tử 1, 2, 3, 4, 5, 6. Sau thao tác đầu tiên mảng có thêm 1 phần tử 1 và trở thành mảng (1, 1, 2, 3, 4, 5, 6). Sau thao tác thứ 2, mảng xóa đi 1 phần tử 6 và trở thành mảng (1, 1, 2, 3, 4, 5). Thao tác thứ 3 truy vấn phần tử 1, câu trả lời là YES vì 1 xuất hiện trong mảng. Thao tác thứ 4 truy vấn phần tử 6, câu trả lời là NO vì 6 không xuất hiện trong mảng.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

multiset <long long> m_set;
int bool_array[10000];
int count_bool_array = 0;

void thaotac1_insert(long long X){
    m_set.insert(X);
}
void thaotac2_erase(long long X){
    auto it = m_set.find(X);
    if( it != m_set.end()) m_set.erase(it);
}
void thaotac3_find( long long X){
    auto it = m_set.find(X);
    if( it != m_set.end()) {
        bool_array[count_bool_array] = 1;
        count_bool_array++;
    }
    else{
        bool_array[count_bool_array] = 0;
        count_bool_array++;
    } 
}
void Result_show(){
    for( int i = 0; i < count_bool_array; i++){
        if(bool_array[i] == 1) cout << "YES\n";
        else if(bool_array[i] == 0) cout << "NO\n";
    }
}
void show_m_set(multiset<long long>& show_mset){
    for ( auto x: show_mset){
        cout << " show : " << x;
    }
    cout << endl;
}

void Query_number(int Q){
    for( int i = 1; i <= Q; i++){
        int choice_Q; cin >> choice_Q;
        switch (choice_Q){
            case 1: {
                long long val_insert; cin >> val_insert;
                thaotac1_insert(val_insert);
                break;
            }
            case 2: {
                long long val_erase; cin >> val_erase;
                thaotac2_erase(val_erase);
                break;
            }
            case 3: {
                long long val_find; cin >> val_find;
                thaotac3_find(val_find);
                break;
            }
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n; cin >> n;
    for(int i = 0; i < n; i++){
        long long x; cin >> x;
        m_set.insert(x);
    }
    int Q_number; cin >> Q_number;
    Query_number(Q_number);
    Result_show();
    
    return 0;
}