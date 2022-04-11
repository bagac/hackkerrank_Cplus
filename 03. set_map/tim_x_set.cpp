// Cho dãy số A[] gồm có N phần tử, bạn hãy trả lời các truy vấn để xác định xem phần tử X nào đó có nằm trong mảng hay không? Bạn hãy thử giải bài này bằng 3 cách : Set, Map, Binary Search.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng thứ 2 gồm N số nguyên A[i] Dòng thứ 3 là số lượng truy vấn Q. Q dòng tiếp theo mỗi dòng là một số nguyên X.

// Constraints

// 1≤ N ≤ 10^5; 0 ≤ A[i], X ≤ 10^9; 1≤ Q ≤ 1000;

// Output Format

// Đối với mỗi truy vấn in ra YES nếu phần tử X xuất hiện trong mảng, ngược lại in ra NO.

// Sample Input 0

// 5
// 1 2 1 3 4
// 2
// 1 
// 6
// Sample Output 0

// YES
// NO

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

void find_x_set(){
    long long n;
    cin >> n;
    long long array_input[n];
    set <long long> set_input;
    for( int i = 0; i < n; i++){
        cin >> array_input[i];
        set_input.insert(array_input[i]);
    }
    int Q;
    cin >> Q;
    int array_Q[Q];
    bool check_val = false;
    for ( int i = 0; i < Q; i++){
        cin >> array_Q[i];
    }
    for ( int i = 0; i < Q; i++){
        auto it = set_input.find(array_Q[i]);
        if(it != set_input.end()) cout << "YES \n";
        else cout << "NO";
    }
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    find_x_set();
    return 0;
}