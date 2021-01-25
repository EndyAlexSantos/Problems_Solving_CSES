#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    cin >> n >> sum;
    vector <int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v1.push_back(v[i]);
    }

    sort(v1.begin(), v1.end());

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int target = v1[left] + v1[right];

        if (target == sum)
        {
            cout << left << " " << right << endl;
            return 0;
        }

        if (target > sum)
        {
            right--;
        }

        if (target < sum)
        {
            left++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == v1[left])
        {
            cout << i
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}