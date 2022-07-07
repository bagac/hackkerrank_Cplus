#include <bits/stdc++.h>

using namespace std;

int gcd( int a, int b){
    if( a == 0 || b == 0) return a+b;
    if( a == b) return a;
    while( a != b){
        if( a > b ) a = a - b;
        else b = b - a;
    }
    return a;
}
class phanso
{
public:
    int tuso, mauso;
    void _show(){
        int gcd_value = gcd(tuso, mauso);
        tuso /= gcd_value;
        mauso /= gcd_value;
        cout << tuso << "/" << mauso << endl;
    }
};
int main()
{
    phanso x;
    cin >> x.tuso >> x.mauso;
    x._show();
    return 0;
}