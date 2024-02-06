#include <iostream>
#include <vector>
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
    int start = n + 1, end;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'B')
        {
            if (start == n + 1)
            {
                start = i;
            }
            end = i;
        }
    }
    if (start == n + 1)
        cout << 0;
    cout << end - start + 1;
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