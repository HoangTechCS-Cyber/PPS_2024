#include <bits/stdc++.>
#define int long long
using namespace std;

float hoocne(int n, float c, float a[]) {
    float p = a[0]; 
    for (int i = 1; i <= n; i++) {
        p = p * c + a[i]; 
    }
    return p;
}

signed main() {
    int n;
    float c;

    cout << "Nhap bac da thuc: ";
    cin >> n;

    float a[n+1]; 

    cout << "Nhap cac he so cua da thuc:\n";
    for (int i = 0; i <= n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Nhap gia tri can tinh (c): ";
    cin >> c;

    float result = hoocne(n, c, a);
    cout << "Gia tri da thuc tai c = " << c << " la: " << result << endl;

    return 0;
}
// node
