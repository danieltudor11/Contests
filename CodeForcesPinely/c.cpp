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
    int n, X;
    cin >> n >> X;
    vector<int> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    ll res = 0;
    vi items;

    ll S = 0;
    int i = 0;
    int m = n - 1;
    while (i < m)
    {
        while ((S + v[m]) / X <= S / X && i < m)
        {
            items.pb(v[i]);
            S += v[i];
            i++;
        }
        if (i == m)
            break;
        items.pb(v[m]);
        res += v[m];
        S += v[m];
        m--;
    }
    items.pb(v[i]);
    if ((S + v[i]) / X > S / X)
    {
        res += v[i];
    }

    cout << res << endl;
    printVector(items);
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
