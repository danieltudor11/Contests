#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)

void print_vec(vi v){
	rep(i,0,(int)v.size()){
		cout << v[i] << " ";
	}
}



void solve(){
	int n, c;
	cin >> n >> c;
	
	vi v;
	rep(i,1,n+1){
		v.pb(i);
	}
	
	if (c < n-1 || c > ((n)*(n+1)/2 - 1)) {
		cout << "IMPOSSIBLE";
		return;
	}
	
	int cost = n - 1;
	
	if (c == cost){
		print_vec(v);
		return;
	}
	int i, fr, br;
	bool left = false;
	// cout << n-1 << " " << c << " " << cost;
	for(i = n-1; i <= c - cost && i > 0; i--){
		left = !left;
		fr = (n-i-1)/2;
		br = (n-i)/2;
		reverse(v.begin() + fr, v.end() - br);
		//print_vec(v);
		//cout << endl;
		cost += i;
	}
	fr = (n-i-1)/2;
	br = (n-i)/2;
	
	
	//cout << "fr = " << fr << " br = " << br << " i = " << i << " left = " << left << endl;
	//cout << "c = " << c << " cost = " << cost << endl;
	
	if (left){
		reverse(v.begin() + fr, v.begin() + fr + c - cost+1);
	}
	else {
		reverse(v.end() - br - (c - cost)-1, v.end() - br);
	}
	print_vec(v);
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
