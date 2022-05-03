#include <iostream>
#include <vector>
#include <string>
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
    cout << endl;

    int r, c;
    cin >> r >> c;

    cout << "..+";
    rep(i, 0, c - 1)
    {
        cout << "-+";
    }
    cout << endl;
    cout << ".";
    rep(i, 0, c)
    {
        cout << ".|";
    }
    cout << endl;
    rep(i, 0, r - 1)
    {
        cout << "+";
        rep(i, 0, c) cout << "-+";
        cout << endl;
        cout << "|";
        rep(i, 0, c) cout << ".|";
        cout << endl;
    }
    cout << "+";
    rep(i, 0, c) cout << "-+";
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
