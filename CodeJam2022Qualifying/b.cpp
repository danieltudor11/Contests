#include <iostream>
#include <vector>
#include <string>
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
    int c = 1000000, m = 1000000, y = 1000000, k = 1000000;
    rep(i, 0, 3)
    {
        int C, M, Y, K;
        cin >> C >> M >> Y >> K;
        c = min(c, C);
        m = min(m, M);
        y = min(y, Y);
        k = min(k, K);
    }
    if ((c + m + y + k) < 1000000)
    {
        cout << "IMPOSSIBLE";
        return;
    }
    int sum = 1000000;
    sum -= c;
    cout << c << " ";
    if (sum <= 0)
    {
        cout << "0 0 0";
        return;
    }

    sum -= m;
    if (sum <= 0)
    {
        cout << 1000000 - c << " 0 0";
        return;
    }
    cout << m << " ";

    sum -= y;
    if (sum <= 0)
    {
        cout << 1000000 - c - m << " 0";
        return;
    }
    cout << y << " ";
    cout << 1000000 - c - m - y;
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
