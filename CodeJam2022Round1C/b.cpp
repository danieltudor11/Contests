#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
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
void print_vec_ll(vll v)
{
    rep(i, 0, (int)v.size())
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    ll s = 0, s2 = 0;
    vll v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
        s += v[i];
        s2 += v[i] * v[i];
    }
    if (n == 1)
    {
        cout << "0";
        return;
    }

    if ((s * s) == s2)
    {
        cout << "equal: " << s << " " << s2 << "0";
        return;
    }
    if (s == 0)
    {
        cout << "IMPOSSIBLE";
        return;
    }
    long double f = (s2 - s * s) / (2.0 * s);
    if (floor(f) == f)
    {
        cout << f;
    }
    else
        cout << "IMPOSSIBLE";
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
