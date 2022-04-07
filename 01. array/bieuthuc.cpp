#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int bieuthuc(int x){
    return (x*x*x + 3*x*x + x + 1);
}
    
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x;
    cin >> x;
    if ( x >= (-1*pow(10,5)) && x <= (pow(10,5)) ) cout << bieuthuc(x);

    
    return 0;
}