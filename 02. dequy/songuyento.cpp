/*
số nguyên tố có 2 ước là 1 và chính nó.
giả sử a x b = n => a <= sqrt(n) căn bật 2 của n
và a <= b
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checknguyento(int n)
{
    if (n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    cout << checknguyento(n);
    return 0;
}
