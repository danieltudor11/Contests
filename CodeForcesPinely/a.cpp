#include <iostream>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)

template <typename T>
void printVector(const T &t)
{
    copy(t.cbegin(), t.cend(), ostream_iterator<typename T::value_type>(cout, ", "));
}

void solve()
{
    int r, x, d, n;
    cin >> r >> x >> d >> n;
    int res = 0;
    string rounds;
    cin >> rounds;
    rep(i, 0, n)
    {
        if (rounds[i] == '1')
        {
            res++;
            r = max(0, r - d);
        }
        else
        {
            if (r < x)
            {
                res++;
                r = max(0, r - d);
            }
        }
    }
    cout << res;
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
