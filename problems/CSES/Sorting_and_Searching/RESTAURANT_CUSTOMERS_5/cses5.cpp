#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0, index = 0, ans = 0;
    vector <int> arrival;
    vector <int> leaving;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        arrival.push_back(a);
        leaving.push_back(b); 
        if ((b - a) > max)
        {
            max = b - a;
            index = i;
        }
''''''
        if ((b - a) == max && arrival[i] > arrival[index])
        {
            max = b - a;
            index = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arrival[index] <= arrival[i] && leaving[index] >= leaving[i])
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}