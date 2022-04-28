#include <bits/stdc++.h>
#include <map>
using namespace std;
int a[500][500];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin >> n;
    map<int, int> mp;
    for( int i = 0; i < n; i++){
        for( int j = 0; j < n; j++){
            cin >> a[i][j];
            mp[a[i][j]] = 0;
        }
    }
    
    for( auto it = mp.begin(); it != mp.end(); it++){
        for( int i = 0; i < n; i++){
            for( int j = 0; j < n; j++){
                if(mp.count(a[i][j])){
                    mp[a[i][j]]++;
                    break;
                }
            }
        }
    }
    for( auto it = mp.begin(); it != mp.end(); it++){
        if( (*it).second == n ) cout << (*it).first << " ";
    }
    return 0;
}
