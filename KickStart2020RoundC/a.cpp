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
	ll n, k;
	cin >> n >> k;
	ll x = k;
	ll res = 0;

	for(int i = 0; i < n; i++){
		ll a;
		cin >> a;
		if (a != x){
			x = k;
		}
		if (a == x){
			x--;
			if (x == 0){
				x = k;
				res++;
			}
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