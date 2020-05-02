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
	int u;
	cin >> u;
	string res = "";
	int xyz = 10000;
	vector<pair<int, char> > v;
	map<char, ll> m;
	set<char> chars;
	ll a;
	string s;
	while (xyz--){
		cin >> a >> s;
		m[s[0]]++;
		chars.insert(s[s.length()-1]);
	}
	
	for (map<char, ll>::iterator it = m.begin(); it != m.end(); it++){
		pair<int, char> p;
		p.first = it->second;
		p.second = it->first;
		v.pb(p);
		chars.erase(p.second);
	}
	
	sort(v.begin(), v.end(), greater <>());
	
	for (int i = 0; i < 9; i++){
		res.pb(v[i].second);
	}
	
	cout << *chars.begin() << res;	
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
