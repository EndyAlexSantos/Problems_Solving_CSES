#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int v[n];
    int ans = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int min = v[0];
    int pos = 0;
    
    for (int i = 1; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
            pos = i;
        }
    }
    
    if (pos != 0)
    {
        int temp = v[0];
        v[0] = v[pos];
        v[pos] = temp;
        ans++;   
    }
    
    int i = 1;
    
    for (i = 1; i < n; i++)
    {
        int pos = v[i] - v[0];
        
        while (v[pos] != v[i])
        {
            int temp = v[pos];
            v[pos] = v[i];
            v[i] = temp;
            ans++;
            pos = v[i] - v[0];
        }
        
        i = pos;
    }
    
    cout << ans << endl;
    
    
    
    return 0;
}