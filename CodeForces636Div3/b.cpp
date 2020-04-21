#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)

vvi v;
vector<bool> v1;

void solve(){
	int n;
	cin >> n;
	
	if (n%4){
		v1.pb(false);
		return;
	}
	
	v1.pb(true);
	
	int x = 2;
	vi temp;
	for (int i = 0; i < n/2; i++){
		temp.pb(x);
		x += 2;
	}
	x = 1;
	for (int i = 0; i < n/2 - 1; i++){
		temp.pb(x);
		x+=2;
	}
	temp.pb(x+n/2);
	
	v.pb(temp);	
}

int main(){
	int t;
	cin >> t;
	
	
	while(t--){
		solve();
	}
	
	
	int x = 0;
	for (int i = 0; i < (int)v1.size(); i++){
		if (v1[i]){
			cout << "YES" << endl;
			for (int j = 0; j < (int)v[x].size(); j++){
				cout << v[x][j] << " ";
			}
			cout << endl;
			x++;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
