#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)


void solve(int x, int y, string s){
	int mx=0, my=0;
	
	int i = 0;
	while(x != mx && i < (int)s.length()){
		if (x > mx){
			mx++;
		}
		if (s[i] == 'N'){
			y++;
		}
		else if (s[i] == 'S'){
			y--;
		}
		i++;
	}
	if (x != mx){
		cout << "IMPOSSIBLE";
		return;
	}
	
	//cout << "mx has reached x at " << x << endl;
	//cout << "y is currently at " << y << endl;
	
	if (y == my){
		cout << i;
		return;
	}
	while(i < (int)s.length()){
		if (y == my){
			cout << i;
			return;
		}
		if (y == my+1 && s[i] == 'S'){
			cout << i+1;
			return;
		}
		if (y == my-1 && s[i] == 'N'){
			cout << i+1;
			return;
		}
		if (y > my){
			my++;
		}
		else {
			my--;
		}
		if (s[i] == 'N'){
			y++;
		}
		else if (s[i] == 'S'){
			y--;
		}
		i++;
	}
	if (y == my){
		cout << i;
		return;
	}
	cout << "IMPOSSIBLE";
}




int main(){
	int t;
	cin >> t;
	
	vs v1;
	vector<pii> v;
	
	rep(i,0,t){
		int x, y;
		string s;
		cin >> x >> y >> s;
		v1.pb(s);
		pii p;
		p.first = x;
		p.second = y;
		v.pb(p);
	}
	
	rep(i,1,t+1){
		cout << "Case #" << i << ": ";
		solve(v[i-1].first, v[i-1].second, v1[i-1]);
		cout << endl;
	}

	return 0;
}
