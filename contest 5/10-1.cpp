#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int mod = 1e9 + 7;
int a[1001][1001], m, n, P[1001][1001];
void solve() {
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == 0 && j > 0)
                P[i][j] += P[i][j - 1];
            else if (j == 0 && i > 0)
                P[i][j] += P[i - 1][j];
            else if (i && j)
                P[i][j] += min(P[i - 1][j - 1], min(P[i - 1][j], P[i][j - 1]));
        }
    }
    cout << P[m - 1][n - 1] << endl;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
                P[i][j] = a[i][j];
            }
        }
        solve();
        
    }
    return 0;
}