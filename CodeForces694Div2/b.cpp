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
	int n, x;
	cin >> n >> x;
	
	int rounds = 300;
	
	int idx = 0;
	vi v;
	
	rep(i,0,n){
		int temp;
		cin >> temp;
		v.pb(temp);
		int count = 0;
		
		while(temp % x == 0){
			temp /= x;
			count++;
		}
		if (count < rounds){
			idx = i;
			rounds = count;
		}
	}
	int res = 0;
	rep(i,0,n){
		if (i < idx){
			res += v[i]*(rounds+2);
		}
		else {
			res += v[i]*(rounds+1);
		}
	}
	
	cout << res;

}


int main(){
	int t;
	cin >> t;

	rep(i,1,t+1){
		solve();
		cout << endl;
	}

	return 0;
}
