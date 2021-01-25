#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0, sum = 0;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }


    for (int i = 0; i < n; i++)
    {
        sum = max(v[i], sum + v[i]);
        ans = max(sum, ans);
    }

    cout << ans << endl;

    return 0;
}