#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n == 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    
    while (scanf("%d", &n) != EOF)
    {
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;
        int s;
        cin >> s;

        for (int i = n - 1; i >= 0; i -= s)
        {
            sum += arr[i];
        }

        if (is_prime(sum))
        {
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        } else {
            cout << "Bad boy! I’ll hit you." << endl;
        }
    }

    return 0;
}