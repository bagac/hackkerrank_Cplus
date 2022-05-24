#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n, k, ok;
int a[100];
void sinh(){
    int i = k;
    while( i >= 1 && a[i] == n ) i--;
    if( i == 0){
        ok = 0;
    }
    else{
        a[i]++;
        for( int j = i + 1; j <= k; j++){
            a[j] =  1;
        }

    }
 }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    cin >> n >> k;
    for( int i = 1; i <= k; i++){
        a[i] = 1;
    }
    ok = 1;
    while( ok ){
        for( int i = 1; i <= k; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}