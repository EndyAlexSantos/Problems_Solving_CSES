#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x = 0;
    int ans = 0;
    
    while (scanf("%d", &n) != EOF)
    {
        if (n < x && ans == 0)
        {
            ans = x + 1;
        }
        x = n;
    }

    if (ans == 0)
    {
        ans = x + 1;
    }
    
    cout << ans << endl;

    return 0;
}