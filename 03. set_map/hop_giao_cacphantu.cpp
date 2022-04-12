// Cho 2 mảng số nguyên a và b gồm n và m phần tử. Gọi mảng c và d lần lượt là mảng chỉ bao gồm các phần tử khác nhau của a và b. Hãy tìm mảng giao và hợp của mảng c và d và liệt kê theo thứ tự tăng dần.

// Input Format

// Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.

// Constraints

// 1≤n,m≤10^6; 0≤ai≤10^7

// Output Format

// Dòng đầu tiên in ra giao của 2 mảng c và d. Dòng thứ 2 in ra hợp của 2 mảng c và d.

// Sample Input 0

// 5 6
// 1 2 1 2 7
// 1 2 3 4 5 6
// Sample Output 0

// 1 2
// 1 2 3 4 5 6 7

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long array_num01, array_num02;
    cin >> array_num01 >> array_num02;
    long long array_01[array_num01];
    long long array_02[array_num02];
    set<long long> set_01;
    set<long long> set_02;
    for(long long i = 0; i < array_num01; i++) {
        cin >> array_01[i];
        set_01.insert(array_01[i]);
    }
    for ( long long ii = 0; ii < array_num02; ii++){
        cin >> array_02[ii];
        set_02.insert(array_02[ii]);
    } 
    set<long long> giao_set;
    for( auto it_01 = set_01.begin(); it_01 != set_01.end(); ++it_01){
        auto it_tmp = set_02.find(*it_01);
        if( it_tmp != set_02.end()){
            cout << *it_01 << " ";
            giao_set.insert(*it_01);
        }
        
    }
    cout << endl;
    set<long long> hop_set;
    for( auto it_01 = set_01.begin(); it_01 != set_01.end(); ++it_01){
        hop_set.insert(*it_01);
    }
    for( auto it_02 = set_02.begin(); it_02 != set_02.end(); ++it_02){
        hop_set.insert(*it_02);
    }

    for( auto x:hop_set){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}