#include <bits/stdc++.h>
using namespace std;
#define MAX 10e10

long long fibo(long long x)
{
    long long fib[x + 1];
    fib[0] = 1;
    fib[1] = 1;

    for (long long i = 2; i <= x; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[x];
}

int main()
{
    long long x;
    cin >> x;
    vector <long long> v;

    int inc = 3;

    while (v.size() < x)
    {
        for (int i = fibo(inc) + 1; i < fibo(inc + 1); i++)
        {
            v.push_back(i);
            if (v.size() == x)
            {
                break;
            }
        }

        inc++;
    }

    cout << v[v.size() - 1] << endl;

}