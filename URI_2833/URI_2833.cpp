#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[16];

    int x = 16;
    map <int, string> m;
    m[16] = "oitavas";
    m[8] = "quartas";
    m[4] = "semifinal";
    m[2] = "final";

    for (int i = 0; i < 16; i++)
    {
        cin >> arr[i];
    }
    
    while (x >= 2)
    {
        int j = 0;

        for (int i = 0; i < x; i += 2)
        {
            if ((arr[i] == 9 && arr[i+1] == 1) || (arr[i] == 1 && arr[i+1] == 9))
            {
                cout << m[x] << endl;
                return 0;
            }
            if ((arr[i] == 9 || arr[i] == 1))
            {
                arr[j] = arr[i];
            }
            else if ((arr[i+1] == 9 || arr[i+1] == 1))
            {
                arr[j] = arr[i+1];
            } else {
                arr[j] = arr[i];
            }
            j++;
        }

        x = x/2;
    }

    return 0;
}