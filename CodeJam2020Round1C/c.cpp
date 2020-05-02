#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


void solve(int n, int d, vector<ll> v){
	if (d==2){
		
	
	
}




int main(){
	int t;
	cin >> t;
	vector<pii> v;
	vector<vector<ll> > v1;
	
	rep(i,0,t){
		int n, d;
		vector<ll> temp;
		cin >> n >> d;
		pii p;
		p.first = n;
		p.second = d;
		v.pb(p);
		rep(j,0,n){
			ll x;
			cin >> x;
			temp.pb(x);
		}
		v1.pb(temp);
	}
	
	rep(i,0,t){
		cout << "Case #" << i+1 << ": ";
		solve(v[i].first, v[i].second, v1[i]);
		cout << endl;
	}

	return 0;
}
