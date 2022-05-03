#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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

void solve()
{
    int n;
    cin >> n;

    vi v;
    ll s = 0;

    rep(i, 0, n)
    {
        cout << i + 1 << " ";
        v.pb(i + 1);
        s += i + 1;
    }
    cout << endl;

    rep(i, 0, n)
    {
        int x;
        cin >> x;
        v.pb(x);
        s += x;
    }
    s /= 2;
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
