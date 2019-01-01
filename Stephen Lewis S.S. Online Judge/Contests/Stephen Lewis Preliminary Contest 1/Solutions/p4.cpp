#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < n; ++i)
#define endl "\n"
#define pb push_back
#define f first
#define s second
#define MEM(a, b) memset(a, (b), sizeof(a))
#define INF 0x3f3f3f3f

using namespace std;

const int MAXN = 10000;
int dp[MAXN];
vector<pair<int, int> > gifts;

int main()
{
    cin.sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    MEM(dp, 0);

    int m, n;
    cin >> m >> n;

    int c, s;
    forn(i, n)
    {
        cin >> c >> s;
        gifts.pb({c, s});
    }

    forn(i, n)
    {
        for (int j = m; j >= gifts[i].f; --j)
        {
            dp[j] = max(dp[j], dp[j - gifts[i].f] + gifts[i].s);
        }
    }

    cout << dp[m] << endl;
}
