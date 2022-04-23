/*
Even Odds
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, h, p;
    cin >> n >> p;
    if (n % 2 == 0)
        h = n / 2;
    else
        h = (n + 1) / 2;
    if (p <= h)
        cout << (2 * p) - 1;
    else
        cout << 2 * (p - h);

    return 0;
}