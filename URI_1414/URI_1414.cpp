#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int t, j;
        cin >> t >> j;
        int ans = 0;

        if (t == 0)
        {
            break;
        }

        for (int i = 0; i < t; i++)
        {   
            string x;
            int h;
            cin >> x >> h;
            ans += h;
        }

        cout << (3 * j) - ans << endl;
    }

    return 0;
}