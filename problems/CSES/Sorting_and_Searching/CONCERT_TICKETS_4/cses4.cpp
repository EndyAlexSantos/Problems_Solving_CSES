#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> price(n);
    vector <int> max_price(m);

    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> max_price[i];
    }

    sort(price.begin(), price.end());
    sort(max_price.begin(), max_price.end());

    for (int i = m - 1; i >= 0; i--)
    {
        int j = n - 1;
        for (int j = n - 1; j >= 0; j--)
        {
            if (price[j] > max_price[i])
            {
                price.pop_back();
            }

            if (price[j] <= max_price[i])
            {
                if (price.empty())
                {
                    cout << -1 << endl;
                } else {
                    cout << price[j] << endl;
                    price.pop_back();
                }
                break;
            }
        }
    }

    return 0;
}