#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define For(i, a, b) for (int i = a; i <= b; i++)
#define pii pair<int, int>

const int MOD = 1e9 + 7;
const int N = 108;
const int maxn = 150000;
int i, n;
float c, p, a[10];


void GetInput()
{
    cout << "Nhap gia tri can tinh: "; cin >> c;
    cout << "Nhap bac cua da thuc: ";  cin >> n;
    cout << "Nhap cac he so: ";
    For(i,0,n) {cout << "a["<<i<<"] = "; cin >> a[i];}
    p = a[0];

}

void solve()
{
    For(i,1,n) p = p*c + a[i];

}
void rep()
{
    cout << "Gia tri cua da thuc la: " << p << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    GetInput();
    solve();
    rep();
}
