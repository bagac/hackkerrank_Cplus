#include <bits/stdc++.h>
using namespace std;

void swap_00(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

struct sinhvien{
    string ten, tuoi, diachi;
};
int main(){

    int a = 101, b = 202;
    swap_00(&a, &b);
    cout << a << " " << b << endl;

    sinhvien x;
    x.ten = "nguyen van a";
    x.tuoi = " 20 ";
    x.diachi = " nguyen van kinh ";
    sinhvien *ptr = &x;
    cout << ptr->ten << " " << ptr->tuoi << " " << ptr->diachi << endl;

    int n = 5;
    int array[n];
    for( int i = 0; i < n; i++){
        //cin >> a[i];
        cin >> *(array+i);
    }    
    for( auto x:array) cout << x << " ";
    
    return 0;
}