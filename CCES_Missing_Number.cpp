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

int main()
{
    int n;
    cin >> n;

    int res = 1;

    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        res ^= x;
        res ^= i;
    }

    cout << res;

    return 0;
}
