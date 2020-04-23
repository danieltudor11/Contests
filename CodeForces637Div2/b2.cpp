#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


pii solve(){
	int n, k;
	cin >> n >> k;
	vi v(n);
	rep(i,0,n){
		cin >> v[i];
	}
	
	int mp = 0;
	int bid = n+1;
	for (int i = 0; i <= max(0,n-k); i++){
		int count = 0; 
		for (int j = i+1; j < i+k-1; j++){
			if (!j || j >= n-1){
				continue;
			}
			if (v[j] > v[j-1] && v[j] > v[j+1]){
				count++;
			}
		}
		if (count > mp){
			mp = count;
			bid = i+1;
		}
	}
	pii p;
	p.first = mp+1;
	p.second = bid;
	
	return p;
	
}


int main(){
	int t;
	cin >> t;
	int x = t;
	
	vector<pii> v;
	while (t--){
		v.pb(solve());
	}
	
	for (int i = 0; i < x; i++){
		cout << v[i].first << " " << v[i].second << endl;
	}
	return 0;
}
