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

void printvec(vi v)
{
    rep(i, 0, v.size())
    {
        cout << v[i] << " ";
    }
}

void solve()
{
    int n;
    cin >> n;
    vvi v;
    int t = 0;
    rep(i, 0, n)
    {
        vi v1;
        rep(j, 0, n)
        {
            char x;
            cin >> x;
            v1.pb(x == '0' ? 0 : 1);
            if (x == '1')
                t++;
        }
        v.pb(v1);
    }

    int m = 0;
    rep(i, 0, n)
    {
        int s = 0;
        rep(j, 0, n)
        {
            if (v[j][(j + i) % n])
                s++;
        }
        m = max(m, s);
    }
    cout << (n - m) + (t - m);
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