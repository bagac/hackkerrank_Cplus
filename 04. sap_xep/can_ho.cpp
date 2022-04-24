// Có n người nộp đơn và m căn hộ miễn phí. Nhiệm vụ của bạn là phân phối các căn hộ sao cho càng nhiều người đăng ký sẽ nhận được căn hộ càng tốt. Mỗi người nộp đơn có một kích thước căn hộ mong muốn, và họ sẽ chấp nhận bất kỳ căn hộ nào có diện tích đủ gần với kích thước mong muốn.

// Input Format

// Dòng nhập đầu tiên có ba số nguyên n, m và k: số người đăng ký, số căn hộ và chênh lệch tối đa cho phép. Dòng tiếp theo chứa n số nguyên a1, a2,…, an: diện tích căn hộ mong muốn của mỗi người đăng ký. Nếu kích thước mong muốn của người nộp đơn là x, người đó sẽ chấp nhận bất kỳ căn hộ nào có kích thước từ x-k đến x + k. Dòng cuối cùng ghi m số nguyên b1, b2,…, bm: diện tích từng căn hộ.

// Constraints

// 1≤ n, m ≤10^5 0≤ k ≤10^9 1≤ai, bi ≤10^9

// Output Format

// In một số nguyên: số người nộp đơn sẽ nhận được một căn hộ.

// Sample Input 0

// 4 3 5
// 60 45 80 60
// 30 60 75
// Sample Output 0

// 2


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
using ll = long long;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m , k; cin >> n >> m >> k;
    multiset<ll> ms_a;
    ll b[m];
    for( int i = 0; i < n; i++) {
        int x; cin >> x;
        ms_a.insert(x);
    }
    for( ll &y:b) cin >> y;
    int ans = 0;
    for( int i = 0; i < m; i++){
        auto it_low = ms_a.upper_bound(b[i] - k);
        if( it_low != ms_a.begin()){
            --it_low;
            ans++;
            ms_a.erase(it_low);
        }
        else if ( it_low == ms_a.begin()){
            auto it_up = ms_a.upper_bound(b[i] + k);
            if( it_up != ms_a.begin()){
                --it_up;
                ans++;
                ms_a.erase(it_up);
            }
        }
    }
    cout << ans;
    return 0;
}