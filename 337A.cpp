/*
Puzzles
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num, shops, f[1000];
    cin >> num >> shops;
    for (int i = 0; i < shops; ++i)
    {
        cin >> f[i];
    }
    sort(f, f + shops);
    int least = f[num - 1] - f[0];
    for (int i = 1; i <= shops - num; ++i)
    {
        if (f[i + num - 1] - f[i] < least)
        {
            least = f[i + num - 1] - f[i];
        }
    }
    cout << least << endl;
    return 0;
}