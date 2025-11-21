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
    string x;
    cin >> x;

    sort(x.begin(), x.end());

    if (x[0] == '0')
    {
        int i = 0;
        while (x[i] == '0')
            i++;
        char temp = x[i];
        x[i] = '0';
        x[0] = temp;
    }
    cout << x;

    return 0;
}
