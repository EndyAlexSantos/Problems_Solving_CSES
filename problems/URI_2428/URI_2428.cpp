#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    if (b == 0)
    {
        return a;     
    } else {
        return gcd (b, a % b);                
    }
}

int main()
{
    vector <int> v;

    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    do
    {
        if (v[0] * v[3] == v[1] * v[2])
        {
            cout << "S" << endl;
            return 0;
        }
    } while (next_permutation(v.begin(), v.end()));

    cout << "N" << endl;

    return 0;
}