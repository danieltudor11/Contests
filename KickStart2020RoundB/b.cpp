#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)



void solve(ll d, vector<ll> v){
	int n = v.size();
	
	for (int i = n-1; i >= 0; i--){
		d -= d % v[i];
	}
	cout << d << endl;
	
}


int main(){
	int t;
	cin >> t;
	
	vector<pair<ll, vector<ll> > > v;
	
	rep(i,1,t+1){
		int n;
		ll d;
		cin >> n >> d;
		vector<ll> v1;
		
		rep(i,0,n){
			ll temp;
			cin >> temp;
			v1.pb(temp);
		}
		v.pb(make_pair(d, v1));
	}
	rep(i,0,t){
		cout << "Case #" << i+1 << ": ";
		solve(v[i].first, v[i].second);
	}

	return 0;
}
