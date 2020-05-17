#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


void solve(){
	int n, q, L, R;
	cin >> n >> q;
	vector<int> v(n+1);

	for (int i = 1; i <= n; i++){
		cin >> v[i];
	}

	ll res = 0;

	while(q--){
		char c;
		cin >> c >> L >> R;

		if (c == 'U'){
			v[L] = R;
			continue;
		}

		int x = 0;
		for (int i = L; i <= R; i++){
			res += v[i]*(i-L+1)*pow(-1, x++);
		}
	}
	cout << res;
}


int main(){
	int t;
	cin >> t;

	rep(i,1,t+1){
		cout << "Case #" << i << ": ";
		solve();
		cout << endl;
	}

	return 0;
}