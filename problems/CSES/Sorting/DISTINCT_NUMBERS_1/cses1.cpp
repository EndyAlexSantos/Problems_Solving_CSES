#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long ans = 0;
    vector <int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        long long x;
        
        if (v[i] != x)
        {
            ans++;
        }

        x = v[i];
    }

    cout << ans << endl;

    return 0;
}