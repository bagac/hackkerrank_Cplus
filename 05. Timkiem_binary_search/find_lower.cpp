#include <bits/stdc++.h>

using namespace std;
// TIM SO >= X
int lower(int a[], int n, int x){
    int res = -1, left = 0, right = n-1;
    while(left <= right){
        int mid = (left + right) / 2;
        if( a[mid] >= x){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return res;
}


//TIM SO > X
int higher(int a[], int n, int x){
    int res = -1, left = 0, right = n-1;
    while(left <= right){
        int mid = (left + right) / 2;
        if( a[mid] > x){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return res;
}

int findX(int a[], int n, int x){
    int res = -1, left = 0, right = n-1;
    while(left <= right){
        int mid = (left + right)/2;
        if(a[mid] == x){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return res;
}
int main()
{
    int n, x; cin >> n >> x;
    int a[n];
    for( int i = 0; i < n; i++){
        cin >> a[n];
    }
    cout << higher(a, n , x) << endl;
    cout << lower(a, n, x) << endl;
    cout << findX(a, n, x) << endl;
    return 0;
}