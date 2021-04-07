#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
    {
        int arr1[n];
        int arr2[n];
        int swap = 0;
        map <int, int> m; 

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            m[arr1[i]] = i;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        for (int i = 0; i < n; i++)
        {
            int f_p = m[arr2[i]];
            
            for (int j = f_p; j > i; j--)
            {
                m[arr1[j]] = j - 1;
                m[arr1[j - 1]] = j;   
                int temp = arr1[j];
                arr1[j] = arr1[j - 1];
                arr1[j - 1] = temp;
                swap++;
            }
        }

        cout << swap << endl;
    }

    return 0;
}