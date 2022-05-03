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
	int mod = 1e9 + 7;

	cin >> n;

	long long res = 1;

	for (int i = 0; i < n; i++)
	{
		res = res * 2 % mod;
	}

	cout << res;

	return 0;
}
