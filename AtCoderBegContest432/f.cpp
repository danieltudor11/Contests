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

int main()
{

    int n;
    cin >> n;

    vvi v(n, vi(2));
    int sum = 0;
    rep(i, 0, n)
    {
        cin >> v[i][0];
        v[i][1] = i + 1;
        sum += v[i][0];
    }
    if (sum % n != 0)
    {
        cout << "-1" << endl;
        return 0;
    }

    int target = sum / n;

    sort(v.begin(), v.end());

    int l = 0;
    int r = n - 1;
    bool flag = true;

    while (flag)
    {
        flag = false;
        while (l < r)
        {
            if (v[r][0] - target == target - v[l][0])
            {
                flag = true;
                int diff = v[r][0] - target;
                v[r][0] -= diff;
                v[l][0] += diff;
                cout << v[r][1] << " " << v[l][1] << " " << diff << endl;
                l = 0;
                r = n - 1;
                sort(v.begin(), v.end());
                break;
            }
            if (v[r][0] - target > target - v[l][0])
                r--;
            else if (v[r][0] - target < target - v[l][0])
                l++;
        }
    }

    l = 0;
    r = n - 1;

    while (v[r][0] != target && v[l][0] != target)
    {
        if (v[r][0] - target > target - v[l][0])
        {
            int diff = target - v[l][0];
            v[r][0] -= diff;
            v[l][0] += diff;
            cout << v[r][1] << " " << v[l][1] << " " << diff << endl;
        }
        else if (v[r][0] - target < target - v[l][0])
        {
            int diff = v[r][0] - target;
            v[r][0] -= diff;
            v[l][0] += diff;
            cout << v[r][1] << " " << v[l][1] << " " << diff << endl;
        }
        else if (v[r][0] - target == target - v[l][0])
        {
            int diff = v[r][0] - target;
            v[r][0] -= diff;
            v[l][0] += diff;
            cout << v[r][1] << " " << v[l][1] << " " << diff << endl;
        }
        sort(v.begin(), v.end());
    }

    return 0;
}
