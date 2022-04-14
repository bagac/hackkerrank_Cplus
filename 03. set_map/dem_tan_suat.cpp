// Cho mảng các số nguyên không âm gồm n phần tử, thực hiện đếm tần suất xuất hiện của các phần tử và in theo mẫu.

// Input Format

// Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

// Constraints

// 2≤n≤10^6; 0≤ai≤10^7

// Output Format

// In ra tần suất xuất hiện của các phần tử theo thứ tự từ nhỏ tới lớn sau đó bỏ trống 1 dòng và in ra tần suất xuất hiện của các phần tử theo thứ tự xuất hiện trong mảng(mỗi giá trị chỉ liệt kê 1 lần).

// Sample Input 0

// 8
// 2 1 2 3 4 8 2 3
// Sample Output 0

// 1 1
// 2 3
// 3 2
// 4 1
// 8 1

// 2 3
// 1 1
// 3 2
// 4 1
// 8 1

#include <bits/stdc++.h>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(long long a, long long b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout  
    map<long long, long long> mp;
    long long input_n; cin >> input_n;
    vector <long long> vector_sort;
    for( long long i = 0; i < input_n; i++){
        long long Phantu_N; cin >> Phantu_N;
        mp[Phantu_N]++;
        vector_sort.push_back(Phantu_N); // push phần tử n và tần suất xuất hiện
    }
    for (auto it = mp.begin(); it != mp.end(); it++){  // pair<long long, long long> x;
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;
    for(auto iii = vector_sort.begin(); iii != vector_sort.end(); iii++){
        if(mp.count(*iii)){
            cout << *iii << " " << mp[*iii] << endl;
            mp.erase(*iii);
        } 
    }
    return 0;
}