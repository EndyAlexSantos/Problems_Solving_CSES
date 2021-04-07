#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, sum = 0;
    cin >> x;
    int arr[x][x];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < x; i++)
    {
        sum += arr[i][i+1];
    }

    cout << sum << endl;

    return 0;
}