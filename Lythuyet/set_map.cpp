#include <bits/stdc++.h>

using namespace std;
template <class A>
int &fun(){
    static int x = 10;
    return x;
}
int main(){

    fun() = 30;
    cout << fun();
    return 0;
}