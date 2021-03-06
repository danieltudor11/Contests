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
	int n, k;
	cin >> n >> k;
	vi v(n);
	vi peaks;
	rep(i,0,n){
		cin >> v[i];
		if (i > 1 && v[i] < v[i-1] && v[i-1] > v[i-2]){
			peaks.pb(i-1);
		}
	}
	
	
	int mp = 0;
	int bid = n+1;
	for (int i = 0; i <= n-k; i++){
		int count = 0;
		for (int j = 0; j < (int)peaks.size(); j++){
			if (peaks[j] > i && peaks[j] < i+k-1){
				count++;
			}
		}
		if (count > mp){
			mp = count;
			bid = i+1;
		}
		
	}
	cout << mp+1 << " " << bid << endl;
	
}


int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
