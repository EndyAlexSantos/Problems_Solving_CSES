#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i = 0, j = 0;
    cin >> n;
    vector <long long> v;
    vector <long long> v1(n);
    long long ans = 10e9;

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    sort(v1.begin(), v1.end());

    v1.push_back(v1[0]);

    while (j < n)
    {
        long long sum1 = 0;
        long long sum2 = 0;

        for (i = 0; i < j; i++)
        {
            sum1 += v1[i];
        }

        for (int j = i + 1; j < n; j++)
        {
            sum2 += v1[j];
        }

        v.push_back(abs(sum1 - sum2));
        
        j++;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < ans)
        {
            ans = v[i];
        }
    }

    cout << ans << endl;

    return 0;
}