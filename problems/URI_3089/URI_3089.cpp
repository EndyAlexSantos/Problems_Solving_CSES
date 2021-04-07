#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while (scanf("%d", &n) != 0)
    {
        int arr[2*n];

        for (int i = 0; i < 2*n; i++)
        {
            cin >> arr[i];
        }

        int n_max1 = arr[0], n_max2 = arr[1];
        int n_min1 = arr[2*n-1], n_min2 = arr[2*n-2];
        int dif = (n_max1 + n_max2) - (n_min1 + n_min2);

        while (true)
        {
            
        }

    }

    return 0;
}