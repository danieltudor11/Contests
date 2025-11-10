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
}

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    rep(i, 0, n) cin >> v[i];
    string s;
    cin >> s;
    // if start or end with '1', impossible
    if (s[0] == '1' || s[n - 1] == '1')
    {
        cout << "-1";
        return;
    }
    // if x has a 1, and p has a 1 or n, impossible
    rep(i, 0, n)
    {
        if (s[i] == '1' && (v[i] == 1 || v[i] == n))
        {
            cout << "-1";
            return;
        }
    }
    cout << "idk yet";
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