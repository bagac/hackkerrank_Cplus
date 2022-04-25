#include <bits/stdc++.h>
using namespace std;
int a[500][500];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    int b[n*n];
    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int k = 0;
    for (int j = 0 ; j < n ; j++)
    {
        for (int i = 0 ; i < n ; i++)
        {
            b[k] = a[i][j];
            k++;
        }
        
    }
    
    for( int i = 0; i < n*n; i += n){
        sort(b+i, b+i+n);
    }
    
    int e = 0;
    for (int j = 0 ; j < n ; j++)
    {
        for (int i = 0 ; i < n ; i++)
        {
            a[i][j] = b[e];
            e++;
        } 
    }
    
    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
