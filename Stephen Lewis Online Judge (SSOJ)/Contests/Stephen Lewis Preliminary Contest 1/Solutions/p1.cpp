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

    int k, n;
    cin >> k >> n;

    int r;
    cin >> r;

    double total = 0;
    forn(i, n)
    {
        total += k * pow(1 + r / 100.0, n - i - 1);
    }

    cout << fixed << setprecision(2) << total << endl;
}
