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
	ll m;
	string s;
	set<char> chars;
	int count = 1;
	while (xyz--){
		if (res.length() == 10) break;
		cin >> m >> s;
		if (m == count && chars.find(s[0]) == chars.end() && count < 10){
			chars.insert(s[0]);
			count++;
			res += s[0];
		}
		if (m == 10 && s.length() == 2 && chars.find(s[1])==chars.end()){
			res.insert(res.begin(), s[1]);
			chars.insert(s[1]);
		}
	}
	cout << res;	
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
