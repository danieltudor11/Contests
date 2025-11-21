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

int main()
{
    int n, X, Y;
    cin >> n >> X >> Y;
    vi v(n);
    rep(i, 0, n) cin >> v[i];

    ll D = Y - X;

    ll R = -1;
    for (int i = 0; i < n; i++)
    {
        ll r = ((v[i] % D) * (X % D)) % D;
        if (R == -1)
            R = r;
        else if (R != r)
        {
            cout << "-1" << endl;
            return 0;
        }
    }

    ll Wmin = v[0] * X;
    ll Wmax = v[0] * Y;

    for (int i = 1; i < n; i++)
    {
        Wmin = max(Wmin, (ll)v[i] * X);
        Wmax = min(Wmax, (ll)v[i] * Y);
    }

    if (Wmin > Wmax)
    {
        cout << "-1" << endl;
        return 0;
    }

    ll rWmax = Wmax % D;
    if (rWmax < 0)
        rWmax += D;

    ll diff = (rWmax - R) % D;
    if (diff < 0)
        diff += D;

    ll W = Wmax - diff;
    if (W < Wmin)
    {
        cout << "-1" << endl;
        return 0;
    }

    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        ll li = (W - v[i] * X) / D;
        total += li;
    }

    cout << total << endl;

    return 0;
}
