#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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

void solve()
{
    string s;
    cin >> s;

    string res = "";
    rep(i, 0, s.length() - 1)
    {
        if (s[i] == s[i + 1])
        {
            int temp = i;
            bool needed = false;
            while (temp < s.length())
            {
                if (s[temp] == s[temp + 1])
                {
                    temp++;
                    continue;
                }
                else if (s[temp] < s[temp + 1])
                {
                    needed = true;
                    break;
                }
                else if (s[temp] > s[temp + 1])
                {
                    break;
                }
                temp++;
            }
            if (needed)
            {
                res.pb(s[temp]);
            }
        }
        else if (s[i] < s[i + 1])
        {
            res.pb(s[i]);
        }
        res.pb(s[i]);
    }
    res.pb(s[s.length() - 1]);
    cout << res;
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
