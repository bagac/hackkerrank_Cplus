#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// build file cpp tren vscode: g++ filename.cpp -o filename

int fibonacci(int n){
    int f0 = 0;
    int f1 = 1; 
    int fn = 1;
    if( n < 0) {
        return -1;
    } else if (n==0 || n == 1){
        return n;
    } else {
        for (int i = 2; i < n; i++){
            f0 = f1;
            f1 = fn;
            fn = f0+ f1;
        }
    }
    return fn;
}
void show_array(vector<int> array){
    cout << "size of array: " << array.size() << endl;
    if( array.size() == 0) cout << "NONE" << endl;
    for (int i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cout << "Nhap vao so luong phan tu: n = " << endl;
    cin >> n;
    int a[n];
    vector <int> fibo_show;
    for (int i = 0; i < n; i ++){
        cin >> a[i];
        for(int fibo = 0; fibo < a[i]; fibo++){
            int tmp = fibonacci(fibo);
            if(a[i] == tmp) fibo_show.push_back(a[i]);
        }
    }
    show_array(fibo_show);
    return 0;
}