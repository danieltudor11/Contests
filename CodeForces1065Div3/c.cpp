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
    vi v1(n);
    vi v2(n);
    rep(i, 0, n) cin >> v1[i];
    rep(i, 0, n) cin >> v2[i];

    int A = 0;
    int B = 0;
    rep(i, 0, n) A ^= v1[i];
    rep(i, 0, n) B ^= v2[i];

    if (A == B)
    {
        cout << "Tie";
        return;
    }

    int last = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v1[i] != v2[i])
        {
            last = i + 1;
            break;
        }
    }
    if (last % 2 != 0)
    {
        cout << "Ajisai";
    }
    else
    {
        cout << "Mai";
    }
    return;
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
