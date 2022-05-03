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

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    int res = 0;
    int lo = 0, hi = n - 1;
    int max = 0;
    while (lo <= hi)
    {
        if (v[lo] <= v[hi])
        {
            if (v[lo] >= max)
            {
                res++;
                max = v[lo];
            }
            lo++;
        }
        else
        {
            if (v[hi] >= max)
            {
                res++;
                max = v[hi];
            }
            hi--;
        }
    }

    cout << res;
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
