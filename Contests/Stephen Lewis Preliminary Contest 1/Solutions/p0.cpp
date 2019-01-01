#include<bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;

int main()
{
    cin.sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t;
    cin >> t;

    ll a, b, c;
    while (t--)
    {
        cin >> a >> b;
        c = pow(a, b);
        cout << c << endl;
    }
}
