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
}

void solve()
{
    int n;
    cin >> n;
    vs grid(n);
    rep(i, 0, n)
    {
        cin >> grid[i];
    }

    const int inf = int(1e9);

    int d1min = inf;
    int d1max = -inf;
    int d2min = inf;
    int d2max = -inf;
    int mini = inf;
    int maxi = -inf;
    int mind = inf;
    int maxd = -inf;

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            d1min = min(d1min, i + j);
            d1max = max(d1max, i + j);
            d2min = min(d2min, i - j);
            d2max = max(d2max, i - j);
            mini = min(mini, i);
            maxi = max(maxi, i);
            mind = min(mind, j);
            maxd = max(maxd, j);
        }
    }

    if (d1max - d1min <= 1 || d2max - d2min <= 1 || (maxi - mini <= 1 && maxd - mind <= 1))
        cout << "YES";
    else
        cout << "NO";
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
