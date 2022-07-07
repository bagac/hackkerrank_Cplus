#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

set<string> vt;
void sinh(int a[], int n, int &ok)
{
    int i = n - 1;
    while (i >= 0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i >= 0)
    {
        a[i] = 1;
    }
    else
        ok = 0;
}
int ktmang(int a[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < n / 2)
    {
        if (a[i] != a[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
string reverse_set(string str)
{
    string tmp = "";
    for (int i = str.length() - 1; i >= 0; i--)
        tmp += str[i];
    return tmp;
}
void sinhlientuc(int a[], int n, int ok, int kq[1000][100], int &demKq)
{
    while (ok)
    {
        if (ktmang(a, n))
        {
            string tmp = "";
            for (int i = 0; i < (n); i++)
                {
                    kq[demKq][i] = a[i];
                    tmp += a[i] + '0'; 
                }
            vt.insert(tmp);
            demKq++;
            
        }
        sinh(a, n, ok);
    }
}

void inKetqua(int kq[1000][100], int demKq, int n)
{
    for (int i = 0; i < demKq; i++)
    {
        for (int j = 0; j < n; j++)
            cout << kq[i][j];
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i = i + 2)
    {
        int ok = 1;
        int a[n] = {};
        int kq[1000][100];
        int demKq = 0;
        sinhlientuc(a, i, ok, kq, demKq);
        // inKetqua(kq, demKq, i);
        // cout << endl;
    }
    for( auto x : vt) {
        cout << x  << endl;
    }
}