// Cho xâu nhị phân S, hãy in ra xâu nhị phân kế tiếp của S. Trong trường hợp S là xâu nhị phân cuối cùng thì in ra xâu nhị phân đầu tiên.

// Input Format

// 1 dòng duy nhất chưa xâu nhị phân S

// Constraints

// 1<=len(S)<=1000;

// Output Format

// In ra xâu nhị phân kế tiếp.

// Sample Input 0

// 1110010
// Sample Output 0

// 1110011
// Sample Input 1

// 11111
// Sample Output 1

// 00000

#include <bits/stdc++.h>
using namespace std;

string s;
void sinh()
{
    int i = s.length() - 1;
    while(i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        --i;
    }
    if(i == -1)
    {
        cout << string(s.length() , '0');
    }
    else
    {
        s[i] = '1';
        cout << s;
    }
}
int main()
{
    cin >> s;
    sinh();
}
