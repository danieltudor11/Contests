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
	int n, m, x;
	cin >> n >> m >> x;

	vi costs(n);
	vvi mat(n);

	for (int i = 0; i < n; i++){
		cin >> costs[i];
		for (int j = 0; j < m; j++){
			int temp;
			cin >> temp;
			mat[i].pb(temp);
		}
	}

	

	return 0;
}
