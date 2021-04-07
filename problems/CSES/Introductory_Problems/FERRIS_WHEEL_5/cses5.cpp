#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w, ans = 0;
    cin >> n >> w;
    vector <int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] + v[v.size()-1] <= w)
        {
            ans++;
            v.pop_back();
        } else {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}