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

string solve(const string &k)
{
    char c = k[k.length() - 1];
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return "Alice";
    }
    else if (c == 'Y' || c == 'y')
    {
        return "nobody";
    }
    else
        return "Bob";
}

int main()
{
    int t;
    cin >> t;
    string kingdom;

    for (int i = 1; i <= t; ++i)
    {
        cin >> kingdom;
        cout << "Case #" << i << ": " << kingdom << " is ruled by " << solve(kingdom) << ".\n";
    }

    return 0;
}
