#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    map <int, int> m;
    int index = 0, best = 0, keep = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = index; j < n; j++)
        {
            keep++;
        
            if (m[j] == 1)
            {
                index = i;
                if (keep > best)
                {
                    best = keep;
                }
                keep = 0;
                map.clear();
            }

            m[j] = 1;
        }
    }

    cout << best << endl;

    return 0;
}