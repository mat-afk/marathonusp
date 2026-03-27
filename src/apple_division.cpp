#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long weights[n];

    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    int l = sizeof(weights) / sizeof(weights[0]);
    sort(weights, weights + l);

    long long group1 = 0;
    long long group2 = 0;

    if (n == 2)
    {
        group1 = weights[0];
        group2 = weights[1];
    }
    else 
    {
        for (int i = 0, j = n - 1; i <= j; i++, j--)
        {
            group1 += weights[i] + weights[j];
            group2 += weights[i] + weights[j];

            if (n % 2 != 0 && i == j)
            {
                if (group1 > group2) group2 += weights[i];
                else group1 += weights[i];
            }
        }
    }

    cout << group1 << endl;
    cout << group2 << endl;

    cout << abs(group1 - group2) << endl;
}