#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>
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

bool isOk(string s)
{
    int n = s.length();
    map<char, int> m;

    rep(i, 0, n)
    {
        if (i != n - 1 && s[i] == s[i + 1])
            continue;

        char c = s[i];
        if (m.find(c) != m.end())
        {
            return false;
        }
        m[c] = 1;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    vs v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    do
    {
        string temp = "";
        rep(i, 0, n)
        {
            temp += v[i];
        }
        if (isOk(temp))
        {
            cout << temp;
            return;
        }
    } while (next_permutation(v.begin(), v.end()));

    cout << "IMPOSSIBLE";
    return;
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
