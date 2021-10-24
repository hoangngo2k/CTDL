#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int mod = 1e9 + 7;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int a[m][n], P[m][n];
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
                P[i][j] = a[i][j];
            }
        }
        for (int i = 1; i < m; ++i)
        {
            for (int j = 1; j < n; ++j)
            {
                if (a[i][j] == 1)
                {
                    P[i][j] = min(P[i - 1][j - 1], min(P[i - 1][j], P[i][j - 1])) + 1;
                }
            }
        }
        int res = 0;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                res = max(res, P[i][j]);
            }
        }
        cout << res << endl;
    }
    return 0;
}
