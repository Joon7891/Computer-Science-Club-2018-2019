#include <bits/stdc++.h>
#define endl "\n"
#define forn(i, n) for (int i = 0; i < n; ++i)

using namespace std;
const int MOD = 1000000000;

ofstream outStream;
char options[5] = { 'I', 'R', 'T', 'P', 'N' };
int removeCounter = 0;
int n, m;

int main()
{
    outStream.open("stacks-practice.10.in");

    cout << "n, m: ";
    cin >> n >> m;

    outStream << n << " " << m << endl;

    forn(i, n)
    {
        outStream << rand() % MOD + 1 << " ";
    }
    outStream << endl;

    forn(i, m)
    {
        char option = options[rand() % 5];

        if ((option == 'R' || option == 'P') && removeCounter >= n)
        {
            --i;
        }
        else
        {
            outStream << option << " ";

            if (option == 'I')
            {
                outStream << rand() % MOD;
            }

            outStream << endl;
        }
    }
}
