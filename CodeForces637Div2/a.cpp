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
	int n,a,b,c,d;
	cin >> n >> a >> b >> c >> d;
	
	if (n*(a-b) <= c+d && n*(a+b) >= c-d){
		cout << "Yes" << endl;
		return;
	}
	
	cout << "No" << endl;
	
}


int main(){
	int t;
	cin >> t;
	
	while (t--){
		solve();
	}
	return 0;
}
