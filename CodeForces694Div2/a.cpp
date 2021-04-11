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
	vi v;
	int temp;
	int mx = 0;
	rep(i,0,n){
		cin >> temp;
		if (temp % x) mx += temp/x + 1;
		else mx += temp;
		v.pb(temp);
	}
	
	



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
