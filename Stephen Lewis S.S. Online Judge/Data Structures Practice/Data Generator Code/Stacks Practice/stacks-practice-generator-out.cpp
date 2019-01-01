#include <bits/stdc++.h>
#define endl "\n"
#define forn(i, n) for (int i = 0; i < n; ++i)

using namespace std;

ifstream inStream;
ofstream outStream;

int main()
{
    inStream.open("stacks-practice.10.in");
    outStream.open("stacks-practice.10.out");

    int n, m;
    inStream >> n >> m;

    stack<int> s;
    int a;
    forn(i, n)
    {
        inStream >> a;
        s.push(a);
    }

    char option;
    int x;
    forn(i, m)
    {
        inStream >> option;

        if (option == 'I')
        {
            inStream >> x;
            s.push(x);
        }
        else if (option == 'R')
        {
            s.pop();
        }
        else if (option == 'T')
        {
            outStream << s.top() << endl;
        }
        else if (option == 'P')
        {
            outStream << s.top() << endl;
            s.pop();
        }
        else
        {
            outStream << s.size() << endl;
        }
    }
}
