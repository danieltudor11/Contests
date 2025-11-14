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
    copy(t.cbegin(), t.cend(), ostream_iterator<typename T::value_type>(cout, " "));
    cout << endl;
}

const int INF = 1e9;
const ll LINF = 1e18;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    rep(i, 0, n) cin >> v[i];

    vi pref(n);
    pref[0] = v[0];
    rep(i, 1, n)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    int m = 0;
    rep(i, 0, n)
    {
        rep(j, i, n)
        {
            int x;
            if (i == 0)
            {
                x = pref[j];
            }
            else
            {
                x = pref[j] - pref[i - 1];
            }
            int new_sum = ((j + 1) + (i + 1)) * (j - (i - 1));
            if (new_sum - x > m)
            {
                m = new_sum - x;
            }
        }
    }
    cout << pref[n - 1] + m;
}

int main()
{
    int t;
    cin >> t;

    rep(i, 1, t + 1)
    {
        solve();
        cout << endl;
    }

    return 0;
}
