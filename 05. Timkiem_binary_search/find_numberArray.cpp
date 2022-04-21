// Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là tìm giá trị nhỏ nhất (phải thuộc mảng A[]) lớn hơn A[i] (i=0, 1, 2,.., n-1). Đưa ra ‘_’ nếu A[i] không có phần tử nhỏ hơn nó. Ví dụ với mảng A[] = {13, 6, 7, 12}, ta có kết quả là { _ , 7 . 12, 13}.

// Input Format

// Dòng đầu tiên đưa vào n là số phần tử của mảng A[]; Dòng kế tiếp đưa vào n số A[i] của mảng; các số được viết cách nhau một vài khoảng trống.

// Constraints

// 1≤ N ≤10^5; 1≤ A[i] ≤10^5.

// Output Format

// Đưa ra kết quả trên 1 dòng

// Sample Input 0

// 9
// 6 3 9 8 10 2 1 15 7
// Sample Output 0

// 7 6 10 9 15 3 2 _ 8

// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;

// bool cmp(int a, int b){
//     if( a != b) return a < b;
//     else return a;
// }
// int main(){

//     int n; cin >> n;
//     int a[n];
//     for( int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     vector<int> Val_Max;
//     for( int ii = 0; ii < n; ii++){
        
//         for ( int j = 0; j < n; j++){
//             if( a[j] > a[ii] && a[j] != a[ii]) Val_Max.push_back(a[j]);
//         }
//         sort(begin(Val_Max), end(Val_Max), cmp);
//         cout << Val_Max.size();
//         if(*Val_Max.begin() < a[ii]) cout << '_' << " ";
//         else cout << *Val_Max.begin() << " ";
//         Val_Max.clear();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;

bool cmp(int a, int b){
    if( a != b) return a < b;
    else return a;
}
int main(){

    int n; cin >> n;
    map<int, int> mp;
    for( int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x] = i;
    }
    map<int, int> tmp_mp = mp;
    for( auto it = mp.begin(); it != mp.end(); it++){
        cout << (*it).first << " " << (*it).second << " <=> ";
        
        tmp_mp[(*(next(it,1))).first ] = (*it).first;
    }

    for( auto it = tmp_mp.begin(); it != tmp_mp.end(); it++){
        cout << (*it).first << " " << (*it).second << " <=> ";
        
    }

    
    return 0;
}