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
    if (n % 2 != 0)
    {
        cout << '0';
        return;
    }
    int x = n / 2;
    int y = 0;

    int res = 0;
    while (x >= 0)
    {
        res++;
        x -= 2;
        y++;
    }
    cout << res;
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
