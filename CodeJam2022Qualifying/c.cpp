#include <iostream>
#include <vector>
#include <algorithm>
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
    int n;
    cin >> n;
    vi v(n);
    rep(i, 0, n) cin >> v[i];

    sort(v.begin(), v.end());

    int num = 1;
    rep(i, 1, n + 1)
    {
        if (v[i - 1] >= num)
        {
            num++;
        }
    }
    cout << num - 1;
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
