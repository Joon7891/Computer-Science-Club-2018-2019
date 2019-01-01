#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < n; ++i)
#define endl "\n"
#define pb push_back
#define MEM(a, b) memset(a, (b), sizeof(a))
#define INF 0x3f3f3f3f

using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int m;
    cin >> m;

    int n;
    cin >> n;

    int a;
    forn(i, n)
    {
        cin >> a;
        m -= a;
    }

    if (m < 0)
    {
        cout << "Deficit" << endl;
    }
    else if (m > 0)
    {
        cout << "Surplus" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    cout << m << endl;
}
