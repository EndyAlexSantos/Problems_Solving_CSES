#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector <int> v(n);
 
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
 
    for (int i = 1; i <= n; i++)
    {
        if (v[i] != i)
        {
            cout << i << endl;
            break;
        }
    }
 
    return 0;
}