
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long gcd ( long long a, long long b){
    if ( a == 0 || b == 0) return a+b;
    while ( a != b ){
        if( a > b) a = a - b;
        else b = b - a;
    }
    return a;

}

long long dequy_gcd( long long a, long long b){
    if ( a == 0 || b == 0) return a+b;
    if ( a == b ) return a;
    else{
        if ( a > b)  return dequy_gcd( a - b, b);
        else return dequy_gcd(a, b - a);
    }
}

// bội chung nhỏ nhất của a và b = a*b / gcd(a,b)
long long lcm (long long a, long long b){
    return a*b/ gcd(a,b);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a, b;
    cin >> a >> b;
    cout << dequy_gcd(a,b) << " " << lcm(a, b);
    return 0;
}
