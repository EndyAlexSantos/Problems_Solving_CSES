#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, e;
    cin >> q >> e;
    map <int, bool> visited;
    

    for (int i = 0; i < e; i++)
    {
        int x;
        cin >> x;
        visited[x] = true;
    }
 
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        
        if (visited.find(x) == visited.end())
        {
            cout << 1 << endl;
            visited[x] = true;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}