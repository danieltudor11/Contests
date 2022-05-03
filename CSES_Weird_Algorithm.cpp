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
    long long n;

    cin >> n;

    while (n != 1)
    {
        cout << n << " ";
        if (n % 2)
            n = n * 3 + 1;
        else
            n /= 2;
    }
    cout << n;

    return 0;
}
