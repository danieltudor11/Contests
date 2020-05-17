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
	int r, c;
	cin >> r >> c;
	vector<vector<char>> v(r, vector<char>(c));
	set<char> chars;

	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cin >> v[i][j];
			chars.insert(v[i][j]);
		}
	}

	string res = "";

	for (int i = 0; i < r-1; i++){
		for (int j = 0; j < c; j++){
			if (chars.empty()){
				cout << -1;
				return;
			}
			if (v[i][j] != v[i+1][j]){
				if (chars.find(v[i+1][j]) == chars.end()){
					cout << -1;
					return;
				}
				if (chars.find(v[i][j]) != chars.end()){
					res.insert(res.begin(), v[i][j]);
					chars.erase(v[i][j]);
				}
			}
		}
	}

	if (chars.empty()){
		cout << -1;
		return;
	}
	for (set<char>::iterator it = chars.begin(); it != chars.end(); it++){
		res.insert(res.begin(), *it);
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