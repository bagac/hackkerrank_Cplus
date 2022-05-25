#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n, k, ok;
int cnt, pos;
int a[100];
void sinh(){
    int i = k;
    while( i >= 1 && a[i] == n - k + i) i--;
    if( i == 0){
        ok = 0;
    }
    else{
        a[i]++;
        for( int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }

    }
 }

int check_2_array(int left[], int right[], int size){
    int kq = 0;
    for( int i = 1; i <= size; i++){
        for( int j = 1; j <= size; j++){
            if(left[i] == right[j]) kq++; 
        }
    }
    return kq;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    cin >> n >> k;
    int b[k];
    for(int i = 1; i <= k; i++) cin >> b[i];
    for( int i = 1; i <= n; i++){
        a[i] = i;
    }
    ok = 1; pos = -1;
    int ans = 0;
    int c[k];
    for( int i = 1; i <= k; i++){
        c[i] = i;
    }
    while( ok ){
        int check = 0;
        for( int i = 1; i <= k; i++){
            if(a[i] == b[i]) check++;
            if( cnt > 0 && cnt == pos + 1){
                c[i] = a[i];
            }
        }
        if( check == k) pos = cnt;
        cnt++;
        sinh();
    }
    cout << k - check_2_array(c, b, k) << endl;
    return 0;
}