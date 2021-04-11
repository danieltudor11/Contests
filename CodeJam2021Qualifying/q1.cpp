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
	int n;
	cin >> n;
	
	vi v;
	rep(i,0,n){
		int x;
		cin >> x;
		v.pb(x);
	}
	
	int cost = 0;
	int idx;
	for(int i = 0; i < n-1; i++){
		idx = i;
		for (int j = i; j < n; j++){
			if (v[j] < v[idx]) idx = j;
		}
		//cout << idx << " ";
		cost += idx - i + 1;
		reverse(v.begin()+i, v.begin()+idx+1);
		/*for (int x = 0; x < n; x++){
			cout << v[x] << " ";
		}
		cout << "index = " << idx << "; cost = " << idx-i+1 << endl;*/
	}
	cout << cost;

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
