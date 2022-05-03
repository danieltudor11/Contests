#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)

void solve()
{
    int n;
    cin >> n;
    vi v;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    int best = 1;
    int pmax = 1;
    int pmin = 1;

    int smax = 0;
    int smin = 0;

    int beststart = 0;
    int bestend = 0;

    rep(i, 0, n)
    {
        if (v[i] < 0)
        {
            swap(pmax, pmin);
            swap(smax, smin);
        }

        if (pmax * v[i] > v[i])
        {
            pmax = pmax * v[i];
        }
        else
        {
            pmax = v[i];
            smax = i;
        }

        if (pmin * v[i] < v[i])
        {
            pmin = pmin * v[i];
        }
        else
        {
            pmin = v[i];
            smin = i;
        }

        if (pmax > best)
        {
            best = pmax;
            beststart = smax;
            bestend = i;
        }
    }

    cout << beststart << " " << n - bestend - 1;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
        cout << endl;
    }
    return 0;
}