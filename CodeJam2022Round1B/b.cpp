#include <iostream>
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

void print_vec(vi v)
{
    rep(i, 0, (int)v.size())
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void print_vec_ll(vector<ll> v)
{
    rep(i, 0, (int)v.size())
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void solve()
{
    int n, p;
    cin >> n >> p;

    vector<vector<ll>> v(n, vector<ll>(2));

    rep(i, 0, n)
    {
        v[i][0] = 1e9;
        v[i][1] = 0;
        rep(j, 0, p)
        {
            ll x;
            cin >> x;
            v[i][0] = min(x, v[i][0]);
            v[i][1] = max(x, v[i][1]);
        }
    }

    ll up = v[0][1];
    ll down = v[0][1];
    v[0][0] = v[0][1];

    rep(i, 1, n)
    {
        int ma = v[i][1];
        int mi = v[i][0];
        int diff = ma - mi;

        up += min(abs(ma - v[i - 1][0]), abs(ma - v[i - 1][1])) + diff;
        down += min(abs(mi - v[i - 1][0]), abs(mi - v[i - 1][1])) + diff;
    }

    cout << min(up, down);
}

int main()
{
    int t;
    cin >> t;

    rep(i, 1, t + 1)
    {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }

    return 0;
}
