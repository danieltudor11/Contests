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
    int n, m = 0, m2 = 0;
    cin >> n;
    vi v;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        v.pb(x);

        if (x >= m)
        {
            m2 = m;
            m = x;
        }
        else if (x >= m2)
        {
            m2 = x;
        }
    }

    if (n == 1 && v[0] > 1)
    {
        cout << "NO";
        return;
    }
    if (m - m2 > 1)
    {
        cout << "NO";
        return;
    }
    cout << "YES";
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