/*
Xenia and Ringroad
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, flag = 0;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
        if (i == 0)
            flag = arr[i] - 1;
        else if (arr[i] < arr[i - 1])
            flag += (n - arr[i - 1] + arr[i]);
        else if (arr[i] > arr[i - 1])
            flag += (arr[i] - arr[i - 1]);
    }
    cout << flag;

    return 0;
}