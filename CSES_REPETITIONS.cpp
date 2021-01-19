#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string x;
    cin >> x;
    long long t = 1;
    char c = x[0];
    vector <long long> v;
    long long ans = 0;
 
    for (long long i = 1; i <= x.size(); i++)
    {
        if (x[i] == c)
        {
            t++;
        } else {
            v.push_back(t);
            c = x[i];
            t = 1;
        }
    }
 
    for (long long i = 0; i < v.size(); i++)
    {
        if (v[i] > ans)
        {
            ans = v[i];
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
