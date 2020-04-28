#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> p;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


int main(){
	int t;
	cin >> t;
	vector<ll> v;
	while (t--){
		ll x, y, a, b;
		cin >> x >> y >> a >> b;
		
		ll sum = 0;
		
		if (2*a < b){
			v.pb(a*(x+y));
			continue;
		}
		
		sum += min(x,y) * b;
		sum += abs(x-y) * a;
		
		v.pb(sum);
	}
	
	for (int i = 0; i < (int)v.size(); i++){
		cout << v[i] << endl;
	}
	return 0;
}
