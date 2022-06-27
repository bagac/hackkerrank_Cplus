#include<bits/stdc++.h>
using namespace std;
void ucln (int n)// Tim uoc chan cua so n
{
  for(int i =1;i<=sqrt(n);i++)
  {
    if(n%i==0 && i%2==0)
    {
      if(i != n/i) cout<<i << " ";
    }
  }
}

int main(){

    
    ucln(20);
    return 0;
}