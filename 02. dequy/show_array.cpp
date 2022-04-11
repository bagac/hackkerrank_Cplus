// Cho một mảng số nguyên A gồm N phần tử, hãy in ra mảng theo thứ tự từ trái qua phải và từ phải qua trái bằng đệ quy.

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

// Constraints

// 1≤n≤1000; 1≤A[i]≤10^6

// Output Format

// Dòng đầu tiên in ra các phần tử trong mảng theo chiều từ trái qua phải. Dòng thứ 2 in ra các phần tử trong mảng theo chiều từ phải qua trái.

// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// 1 2 3 4 5
// 5 4 3 2 1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void dequy_show_nghich(long long *array_show, int size_array){
    if(size_array == 0) return;
    cout << array_show[size_array - 1] << " ";
    dequy_show_nghich(array_show, size_array-1);
}

void dequy_show_thuan(long long *array_show, int size_array){
    if(size_array == 0) return;
    dequy_show_thuan(array_show, size_array-1);
    cout << array_show[size_array - 1] << " ";
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    long long array_input[n];
    for(int i = 0; i < n; i++){
        cin >> array_input[i];
    }
    dequy_show_thuan(array_input, n);
    cout << endl;
    dequy_show_nghich(array_input, n);
    return 0;
}
