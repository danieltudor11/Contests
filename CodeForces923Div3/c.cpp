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
    int n, m, k;
    cin >> n >> m >> k;

    vi v(k + 1, 0);
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        if (x <= k && v[x] % 2 == 0)
        {
            v[x]++;
        }
    }
    rep(i, 0, m)
    {
        int x;
        cin >> x;
        if (x <= k && v[x] < 2)
        {
            v[x] += 2;
        }
    }
    int both = 0;
    int a = k / 2;
    int b = k / 2;
    rep(i, 1, k + 1)
    {
        if (v[i] == 0)
        {
            cout << "NO";
            return;
        }
        if (v[i] == 1 && a == 0)
        {
            cout << "NO";
            return;
        }
        if (v[i] == 2 && b == 0)
        {
            cout << "NO";
            return;
        }
        if (v[i] == 3)
            both++;
        else if (v[i] == 2)
            b--;
        else if (v[i] == 1)
            a--;
    }
    if (both >= a + b)
        cout << "YES";
    else
        cout << "NO";

    return;
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