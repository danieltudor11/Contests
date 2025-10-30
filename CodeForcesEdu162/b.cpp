#include <iostream>
#include <iterator>
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

template <typename T>
void printVector(const T &t)
{
    copy(t.cbegin(), t.cend(), ostream_iterator<typename T::value_type>(cout, ", "));
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vi v(n);
    vi sums(n);
    rep(i, 0, n) cin >> v[i];
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        sums[abs(x) - 1] += v[i];
    }

    ll total = 0;
    rep(i, 0, n)
    {
        total += sums[i];
        if (total > (ll)k * (i + 1))
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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