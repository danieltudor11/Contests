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
    string s;
    cin >> s;

    int n = s.length();
    if (n == 1)
    {
        cout << "1";
        return;
    }

    // the only way he will be on the shore is if there are only '<' on the left and '>' on the right, with a max of one '*' in the middle

    bool flag = false;
    int lefts = 0;
    int rights = 0;
    while (s[lefts] == '<')
    {
        lefts++;
    }
    while (s[n - 1 - rights] == '>')
    {
        rights++;
    }
    if (n > lefts + rights + 1)
    {
        cout << "-1";
        return;
    }
    int temp = 0;
    if (lefts + 1 <= n && rights + 1 <= n)
    {
        if (s[lefts] == '*')
        {
            temp = 1;
        }
    }
    cout << max(lefts, rights) + temp;
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
