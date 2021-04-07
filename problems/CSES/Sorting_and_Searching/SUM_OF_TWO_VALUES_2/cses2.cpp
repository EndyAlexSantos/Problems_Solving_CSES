#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum, target = 0;
    cin >> n >> sum;
    vector <int> v(n);
    vector <int> v1;
    vector <int> index;

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
        target = v1[left] + v1[right];

        if (target == sum)
        {
            break;
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
        if (v[i] == v1[left] || v[i] == v1[right])
        {
            index.push_back(i);
            if (index.size() == 2)
            {
                break;
            }
        }
    }

    if (target != sum)
    {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << index[0] + 1 << " " << index[1] + 1;
    }

    return 0;
}