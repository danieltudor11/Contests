#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef pair<int, int> pii;
#define pb push_back
#define rep(i,a,b) for (int i = a; i < b; i++)

int main(){
	int n;
	ll k;
	cin >> n >> k;
	vi towns(n+1);
	for (int i = 1; i <= n; i++){
		cin >> towns[i];
	}

	set<int> s;
	vi path;
	int index = 1;
	s.insert(index);
	path.pb(index);

	while(1){
		index = towns[index];
		if (s.find(index) != s.end()) break;
		s.insert(index);
		path.pb(index);
	}

	ll count = 0;
	while (path[0] != index){
		path.erase(path.begin());
		count++;
	}

	ll numTowns = path.size();

	cout << path[(ll)(k-count) % numTowns];

	return 0;
}
