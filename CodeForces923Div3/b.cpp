#include <iostream>
#include <vector>
#include <map>
#include <deque>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)

void solve()
{
    int n;
    cin >> n;

    string s;

    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    char temp = 'a';
    vector<vector<char>> vc(n + 1);

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            vc[1].pb(temp);
            s.pb(temp);
            temp++;
        }
        else
        {
            char c = vc[v[i]][vc[v[i]].size() - 1];
            vc[v[i]].pop_back();
            vc[v[i] + 1].pb(c);
            s.pb(c);
        }
    }
    cout << s;
    return;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
        cout << endl;
    }
    return 0;
}