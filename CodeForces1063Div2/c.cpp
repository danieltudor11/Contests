#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)

template <typename T>
void printVector(const T &t)
{
    copy(t.cbegin(), t.cend(), ostream_iterator<typename T::value_type>(cout, " "));
    cout << endl;
}

const int INF = 1e9;
const ll LINF = 1e18;

void solve()
{
    int n;
    cin >> n;
    int N = 2 * n;
    vvi v(2, vi(n));
    vvi maxes(2, vi(n, -INF));
    vvi mins(2, vi(n, INF));
    rep(i, 0, 2)
    {
        rep(j, 0, n)
        {
            cin >> v[i][j];
        }
    }
    maxes[0][0] = v[0][0];
    mins[0][0] = v[0][0];
    maxes[1][n - 1] = v[1][n - 1];
    mins[1][n - 1] = v[1][n - 1];

    rep(i, 1, n)
    {
        maxes[0][i] = max(maxes[0][i - 1], v[0][i]);
        mins[0][i] = min(mins[0][i - 1], v[0][i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        maxes[1][i] = max(maxes[1][i + 1], v[1][i]);
        mins[1][i] = min(mins[1][i + 1], v[1][i]);
    }

    vi path_mins(n);
    vi path_maxes(n);
    rep(i, 0, n)
    {
        path_mins[i] = min(mins[0][i], mins[1][i]);
        path_maxes[i] = max(maxes[0][i], maxes[1][i]);
    }
    printVector(path_mins);
    printVector(path_maxes);

    vi t(N + 1, INF);
    rep(i, 0, n)
    {
        int Lk = path_mins[i];
        int Rk = path_maxes[i];
        t[Lk] = min(t[Lk], Rk);
    }
    printVector(t);

    vi m(N + 2, INF);
    int cur = INF;
    for (int i = N; i >= 1; i--)
    {
        cur = min(cur, t[i]);
        m[i] = cur;
    }

    long long res = 0;
    rep(i, 1, N + 1)
    {
        if (m[i] <= N)
            res += (long long)(N - m[i] + 1);
    }

    cout << res;

    return;
}

int main()
{
    int t;
    cin >> t;

    rep(i, 1, t + 1)
    {
        solve();
        cout << endl;
    }

    return 0;
}
