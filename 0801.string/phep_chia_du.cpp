// Cho 2 số N và M, hãy tìm số dư khi chia N cho M. Để tính số dư của 2 số N và M, trong trường hợp N là 1 số nguyên lớn, ta có thể dùng kiến thức toán học sau. Ví dụ bạn có N = 12345 và M = 3, bạn có thể duyệt từng chữ số của N từ trái qua phải và duy trì số dư r = 0 ban đầu, khi gặp số 1, r = r * 10 + 1, sau đó lấy r % 3 = 1, khi gặp 2, r = r * 10 + 2 = 12, r % 3 = 0,... tương tự như vậy cho tới khi gặp số cuối cùng của N, giá trị của r khi đó chính là số dư khi chia N cho M.

// Input Format

// Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là số nguyên dương M.

// Constraints

// N có không quá 1000 chữ số; M là 1 số nguyên 64 bit.

// Output Format

// In ra kết quả của bài toán

// Sample Input 0

// 33067946071531150754233004290758406156224088702123385775727721812560692728127018053118203890080097807349737445483656674337750559490463284882515284188690875033135649896188928054291493979903124818899453052034828440852665076293856223903153549522293752626469246456263469220701548339620150079748958035285278459874425510146423114651458922315382153363867418189427062506833837102630904319972984364408143264207263924148697330179177840468429040754651164286732641405984220989893094158917765142342992431463840820570772383338073889397592800118784783700396465644597065301244994051135101466785516990398581
// 9999999999998156
// Sample Output 0

// 7481318352255865

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;
ll chiadu(string a, ll b){
    ll mod = 0;
    for( size_t i = 0; i < a.size(); i++){
        mod = (mod * 10 + (a[i] - '0')) % b;
        // cout << i << " " << mod << endl;
    }
    return mod;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a;
    ll b;
    cin >> a >> b;
    cout << chiadu(a, b);
    return 0;
}