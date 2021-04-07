#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h = 0;
    
    while(scanf("%d", &h) != EOF)
    {
        map <int, pair <int, int> > m;
        vector <int> v;

        for (int i = 0; i <  h; i++)
        {
            int x;
            char y;
            cin >> x >> y;

            if (m.find(x) != m.end())
            {
                if (y == 'D')
                {
                    m[x].second++;
                } else {
                    m[x].first++;
                }
            } else {
                if (y == 'D')
                {
                    m[x] = pair <int, int> (0, 1);
                } else {
                    m[x] = pair <int, int> (1, 0);
                }
                v.push_back(x);
            }
        }

        int ans = 0;

        for (int i = 0; i < v.size(); i++)
        {
            ans += min(m[v[i]].first, m[v[i]].second);
        }

        cout << ans << endl;
    }
    return 0;
}