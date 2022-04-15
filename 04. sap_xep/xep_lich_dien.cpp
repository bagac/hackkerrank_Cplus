// Ca sĩ nổi tiếng Lê Ro vừa nhận được các lời mời lưu diễn của n đoàn ca nhạc. Đoàn thứ i mời lưu diễn từ ngày ai đến ngày bi (ai, bi là các số nguyên, ai ≤ bi). Tuy nhiên tại một thời điểm, Lê Ro chỉ có thể tham gia hát cho một đoàn duy nhất mà thôi. Với mong muốn đem lời ca tiếng hát của mình đến nhiều khán giả nhất, Lê Ro quyết định sẽ chọn tham gia nhiều đoàn nhất có thể. Bạn hãy tính thử xem Lê Ro nên chọn tham gia những đoàn nào để số lượng đoàn là nhiều nhất mà không bị trùng nhau về mặt thời gian.

// Input Format

// Dòng thứ nhất là số nguyên n là số đoàn ca nhạc.
// Trong n dòng tiếp theo, dòng thứ i gồm hai số ai, bi cách nhau một khoảng trắng là ngày bắt đầu và ngày kết thúc lưu diễn của đoàn thứ i.
// Constraints

// 1<=n<=10^5; 1<=ai<=bi<=10^6

// Output Format

// Số nguyên xác định số lượng đoàn nhiều nhất mà Lê Ro có thể tham gia.

// Sample Input 0

// 6
// 3 8
// 9 12
// 6 10
// 1 4
// 2 7
// 11 14
// Sample Output 0

// 3

#include <bits/stdc++.h>
#include <algorithm>
#include <map>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first) return a.first < b.first;
    else return a.first;
}
int main(){
    int n; cin >> n;
    pair <int, int> pr[n];
    for( int i = 0 ; i < n; i++){
        int dBegin, dEnd; cin >> dBegin >> dEnd;
        pr[i].first = dBegin; pr[i].second = dEnd;
    }
    sort(pr,pr+n,cmp);
    for( auto x:pr) cout << x.first << " " << x.second << endl;
    int sum = 0;
    int max = 0;
    for( int i = 0; i < n; i++){
        for(int ii = 0; ii < n; ii++){
            cout << "i+1: " << pr[ii].first << " - i: " << pr[i].second << endl;
        if(pr[ii].first > pr[i].second) sum++;
        }
        if( sum > max ) max = sum;
        sum = 0;
    }
    cout << sum;
    return 0;
}