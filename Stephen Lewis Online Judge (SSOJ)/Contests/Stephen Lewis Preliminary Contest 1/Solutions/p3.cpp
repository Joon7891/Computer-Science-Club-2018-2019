#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < n; ++i)
#define endl "\n"
#define pb push_back
#define MEM(a, b) memset(a, (b), sizeof(a))
#define INF 0x3f3f3f3f

using namespace std;

const int MAXN = 1000000;
typedef unsigned long long ull;

ull psaD[MAXN];
ull psaP[MAXN];

int main()
{
    cin.sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    int d;
    for (int i = 1; i <= n; ++i)
    {
        cin >> d;
        psaD[i] = psaD[i - 1] + d;
    }

    psaP[0] = psaD[0] = 0;

    int p;
    for (int i = 1; i <= n; ++i)
    {
        cin >> p;
        psaP[i] = psaP[i - 1] + p;
    }

    int l, r;
    ull dSum, pSum;
    while (q--)
    {
        cin >> l >> r;

        dSum = psaD[r] - psaD[l - 1];
        pSum = psaP[r] - psaP[l - 1];

        if (dSum == pSum)
        {
            cout << "WOOHOO!" << endl;
        }
        else
        {
            cout << "BOOHOO!" << endl;
        }
    }
}
