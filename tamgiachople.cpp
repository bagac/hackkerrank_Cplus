#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b, c;
    cin >> a >> b >> c;
    if(abs(b-c) < a && a < (b+c)) cout << "YES";
    else cout << "NO";
    return 0;
}
