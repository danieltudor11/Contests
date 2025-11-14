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
    int n, a;
    cin >> n >> a;
    vi v(n);
    int big = 0;
    int small = 0;

    rep(i, 0, n)
    {
        cin >> v[i];
        if (v[i] > a)
            big++;
        if (v[i] < a)
            small++;
    }
    if (big > small)
    {
        cout << a + 1;
    }
    else
        cout << a - 1;
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
