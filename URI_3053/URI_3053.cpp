#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a;
    cin >> a;
    map <char, int> m;
    m['A'] = 1, m['B'] = 2, m['C'] = 3;
    map <int, char> m1;
    m1[1] = 'A', m1[2] = 'B', m1[3] = 'C';

    int i_p = m[a];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        if (x == 1 && i_p == 1)
        {
            i_p = 2;
        }
        else if (x == 1 && i_p == 2)
        {
            i_p = 1;
        }

        if (x == 2 && i_p == 2)
        {
            i_p = 3;
        }
        else if (x == 2 && i_p == 3)
        {
            i_p = 2;
        }

        if (x == 3 && i_p == 1)
        {
            i_p = 3;
        }
        else if (x == 3 && i_p == 3)
        {
            i_p = 1;
        }
    }

    cout << m1[i_p] << endl;

    return 0;
}